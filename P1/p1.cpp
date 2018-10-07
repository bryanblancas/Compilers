#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include "transition.cpp"

using namespace std;

void read(vector <char> *states, vector <char> *alphabet, vector <char> *final_states, char *initial_state, vector <Transition> *trans_func);
void complete_automata(vector <char> *states,vector <char> *alphabet, vector <Transition> *trans_func);
int exists(char state, char symbol, vector <Transition> *trans_func);

int main(int argc, char const *argv[]){

	//variables pertenecientes a la quintupla del autómata
	vector <char> states, alphabet, final_states;
	char initial_state;
	vector <Transition> trans_func;

	read(&states, &alphabet, &final_states, &initial_state, &trans_func);

	complete_automata(&states, &alphabet, &trans_func);

	return 0;
}

void read(vector <char> *states, vector <char> *alphabet, vector <char> *final_states, char *initial_state, vector <Transition> *trans_func){
	int i;
	char line[40];
	ifstream fe("input.txt"); 

	fe.getline(line, 40);
  	for (i = 0; line[i] != '\0'; ++i) if(line[i] != ',' && line[i] != ' ') states -> push_back(line[i]);

  	fe.getline(line, 40);
  	for (i = 0; line[i] != '\0'; ++i) if(line[i] != ',' && line[i] != ' ') alphabet -> push_back(line[i]);

  	fe.getline(line, 40);
  	*initial_state = line[0];

  	fe.getline(line, 40);
  	for (i = 0; line[i] != '\0'; ++i) if(line[i] != ',' && line[i] != ' ') final_states -> push_back(line[i]);

  	while(!fe.eof()){
  		fe.getline(line, 40);
  		Transition t(line[0], line[2], line[4]);
  		trans_func -> push_back(t);
  	}

  	fe.close();
}

void complete_automata(vector <char> *states, vector <char> *alphabet, vector <Transition> *trans_func){
	int i, j;
	cout << "\n\n COMPLEMENTO DEL AUTÓMATA \n\n";  
	
	for(i=0; i < states->size(); i++)
		for(j=0; j < alphabet->size(); j++)
			if(!exists(states -> at(i), alphabet -> at(j), trans_func)){
				Transition t(states -> at(i), alphabet -> at(j), 'x');
				trans_func -> push_back(t);
				cout << "\t" <<t.current_state << "," << t.symbol << "," << t.next_state << endl;
			}
	
	states -> push_back('x'); 	
	for(j=0; j < alphabet->size(); j++){
		Transition t('x', alphabet -> at(j), 'x');
		trans_func -> push_back(t);
		cout << "\t" << t.current_state << "," << t.symbol << "," << t.next_state << endl;
	}
	
}

int exists(char state, char symbol, vector <Transition> *trans_func){
	for(int i = 0 ; i < trans_func->size(); i++){
		Transition f = trans_func -> at(i);
		if(state == f.current_state)
			if(symbol == f.symbol)
				return 1;
	}
	return 0;
}


/*	cout << states.size() << ": \t";
	for(int i = 0 ; i < states.size() ; i++)
		cout << states[i];
	cout << endl;

	cout << alphabet.size() << ": \t";
	for(int i = 0 ; i < alphabet.size() ; i++)
		cout << alphabet[i];
	cout << endl;

	cout << initial_state << endl;

	cout << final_states.size() << ": \t";
	for(int i = 0 ; i < final_states.size() ; i++)
		cout << final_states[i];
	cout << endl;

	cout << trans_func.size() << ": \t";
	for(int i = 0 ; i < trans_func.size() ; i++)
		cout << trans_func[i].current_state << "," << trans_func[i].symbol << "," << trans_func[i].next_state << endl;*/