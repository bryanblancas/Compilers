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
		automata();
		void print_automata();
		void read();
		vector<string> next_states(string current_state, char symbol);
};

automata::automata(string f){
	file_name = f;
}
automata::automata(){}

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

void automata::print_automata(){
	for(auto n:states)
		cout << n;
	cout << endl;
	for(auto n:alphabet)
		cout << n;
	cout << endl;
	cout << initial_state << endl;
	for(auto n:final_states)
		cout << n;
	cout << endl;
	for(auto n:trans_func)
		cout << n.current_state << " " << n.symbol << " " << n.next_state << endl;
}

vector<string> automata::next_states(string current_state, char symbol){
	vector<string> v;
	for(auto n:trans_func){
		if(current_state == n.current_state && symbol == n.symbol)
				v.push_back(n.next_state);
	}
	return v;
}
