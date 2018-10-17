#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "transition.cpp"
using namespace std;

class automata{
	public:
		string file_name;
		vector <string> states;
		vector <string> final_states;
		vector <char> alphabet;
		vector <Transition> trans_func;
		string initial_state;

		automata(string f);
		void read();
		void complete_automata();
		vector<string> next_states(string current_state, char symbol);
};

automata::automata(string f){
	file_name = f;
}

vector<string> split(string s,char c){
	string buffer = "";
	vector<string> vs;
	
	for(auto ch:s){
		if(ch != c) 
			buffer += ch; 
		else if(ch == c && buffer != ""){ 
			vs.push_back(buffer); 
			buffer = ""; 
		}
	}
	if(buffer != "") 
		vs.push_back(buffer);
	
	return vs;
}
void automata::read(){

	char coma = ',';
	vector<string> t;
	string line;
	ifstream fe(file_name); 

	getline (fe,line);
    states = split(line,coma);
    
    getline (fe,line);
    for (auto ch:line) if(ch != ',' && ch != ' ') alphabet.push_back(ch);

  	getline(fe, line);
  	initial_state = line;
  	
  	getline(fe, line);
  	final_states = split(line, coma);

  	while(getline(fe, line)){
  		t = split(line,coma);
  		string m = t[1];
  		Transition tra(t[0], m[0], t[2]);
  		trans_func.push_back(tra);
  	}

  	fe.close();
}


int exists(string state, char symbol, vector <Transition> trans_func){
	for(auto n:trans_func){
		if(state == n.current_state)
			if(symbol == n.symbol)
				return 1;
	}
	return 0;
}
void automata::complete_automata(){	
	for(auto str_state:states)
		for(auto ch_alphabet:alphabet)
			if(!exists(str_state, ch_alphabet, trans_func)){
				Transition t(str_state, ch_alphabet, "x");
				trans_func.push_back(t);
			}
	
	states.push_back("x"); 	
	for(auto ch_alphabet:alphabet){
		Transition t("x", ch_alphabet, "x");
		trans_func.push_back(t);
	}
}

vector<string> automata::next_states(string current_state, char symbol){
	vector<string> v;
	for(auto n:trans_func){
		if(current_state == n.current_state && symbol == n.symbol)
				v.push_back(n.next_state);
	}
	return v;
}