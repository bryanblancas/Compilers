#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>
#include <iterator>
#include "transition.cpp"
#include "functionsigma.cpp"

#define azul "\x1B[36m"
#define verde "\x1B[32m"
#define amarillo "\x1B[33m"
#define rojo "\033[0;31m"
#define cerrar "\x1B[00m"

char cad[40];
vector<FunctionSigma> trace, error;

using namespace std;

void read(vector <char> *states, vector <char> *alphabet, vector <char> *final_states, char *initial_state, vector <Transition> *trans_func);
void complete_automata(vector <char> *states,vector <char> *alphabet, vector <Transition> *trans_func);
int exists(char state, char symbol, vector <Transition> *trans_func);
vector<char> next_states(vector <Transition> *trans_func, char current_state, char symbol);
int string_analysis(char current_state, int symbol_position, vector <Transition> *trans_func, vector<char> *final_states, vector<char> *alphabet);

int main(int argc, char const *argv[]){

	//variables pertenecientes a la quintupla del autómata
	vector <char> states, alphabet, final_states;
	vector <Transition> trans_func;
	char initial_state;
	int status;

	read(&states, &alphabet, &final_states, &initial_state, &trans_func);

	complete_automata(&states, &alphabet, &trans_func);

	while(true){

		trace.clear();
		error.clear();

		cout << "\n\nIntroduce la cadena: ";
		cin.getline(cad, 40);

		if(cad != "salir"){
		
			status = string_analysis(initial_state, 0, &trans_func, &final_states, &alphabet);

			if(status){
				cout << azul <<"\n\tLA CADENA ES VÁLIDA\n\n" << cerrar << verde << " RUTA\n\n" << cerrar;
				for(int i=trace.size()-1; i>=0; i--){
					FunctionSigma fs = trace.at(i);
					cout << verde << fs.state << "(" << fs.symbol << ") -> " << cerrar; 
				}
				cout << rojo <<"\n\n ERRORES \n\n" << cerrar;
				for(int i=0; i<error.size(); i++){
					FunctionSigma fs = error.at(i);
					cout << rojo << fs.state << "(" << fs.symbol << ")" << cerrar << endl; 
				}
				cout << "\n\n";
			}
			else 
				cout << rojo <<"\n\n\tLA CADENA NO ES VÁLIDA\n\n" << cerrar;
		}
	}
	return 0;
}

int string_analysis(char current_state, int symbol_position, vector <Transition> *trans_func, vector<char> *final_states, vector<char> *alphabet){
	vector<char> v;
	int status, yes = 0;

	if(symbol_position >= strlen(cad)){
		//cout << "\n\n" << azul << "Estado final: " << cerrar << current_state << "\n\n";
		for(int i = 0; i < final_states->size(); i++)
			if(current_state == final_states -> at(i)) {
				FunctionSigma fs(current_state, ' ');
				trace.push_back(fs); 
				//cout << current_state << " ";
				return 1;
			}
		return 0;
	}
	else{
		v = next_states(trans_func, current_state, cad[symbol_position]);
		if(v.size() == 0){
			FunctionSigma fs(current_state, cad[symbol_position]);
			error.push_back(fs);
			//cout << "NO EXISTE " << current_state << "(" << cad[symbol_position] << ")\n";
			status = string_analysis(current_state, ++symbol_position, trans_func, final_states, alphabet);
			if(status){	
				yes = 1;
			}
		}
		else{
			for(int j = 0; j < v.size(); j++){
				status = string_analysis(v.at(j), ++symbol_position, trans_func, final_states, alphabet); symbol_position--;
				if(status){	
					yes = 1;
					FunctionSigma fs(current_state, cad[symbol_position]);
					trace.push_back(fs);
					//cout << current_state << "(" << cad[symbol_position] << ") ";
				}
			}	
		}
	}

	return yes;
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

vector<char> next_states(vector <Transition> *trans_func, char current_state, char symbol){
	vector<char> v;
	for(int i = 0 ; i < trans_func->size(); i++){
		Transition f = trans_func -> at(i);
		if(current_state == f.current_state && symbol == f.symbol)
				v.push_back(f.next_state);
	}
	return v;
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