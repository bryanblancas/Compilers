#include <map>
#include "automata.cpp"
#include <vector>
#include <string>

//GLOBAL VARIABLES FROM NEW AUTOMATA 
vector<char> names = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
int idx_names = 0;
map<string, char> new_states;
vector<string> transitions;

//FUNCTIONS DECLARATION
vector<string> cerradura_epsilon(vector<string> states, automata *a);
vector<string> mover(vector<string> states, char symbol, automata *a);
vector<string> ir_a(vector<string> states, char symbol, automata *a);
void paso_dos(vector<string> states, automata *a);
int exists_in_vector(vector<string> *vec, string str);
string vector_to_string(vector<string> *vec);
void print_automata(automata *a);
vector<string> split1(string s,char c);

//MAIN
int main(int argc, char const *argv[]){
	vector<string> r_ce;

	automata a = automata(argv[1]);
	a.read();

	//PASO 1: CERRADURA DE EPSILON AL ESTADO INICIAL
	r_ce.push_back(a.initial_state);
	r_ce = cerradura_epsilon(r_ce, &a);
	new_states[vector_to_string(&r_ce)] = names.at(idx_names++);

	//PASO 2: IR_A(Z, ALFABETO)
	paso_dos(r_ce, &a);
	
  	print_automata(&a);

	return 0;
}

vector<string> split1(string s,char c){
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

void print_automata(automata *a){
	map<string, char>::iterator it;

	for(auto n:new_states)
		cout << n.first << "\t" << n.second << endl;

	cout << 'S';
	for(auto n: a -> alphabet)
		cout << "\t" << n;
	cout << "\n\n";

	for(auto n:new_states){
		cout << n.second;
		for(auto m: a -> alphabet){
			for(auto o:transitions){
				vector<string> k = split1(o, ',');
				string nnu = k.at(1);
				if(n.first == k.at(0) && m == nnu[0]){
					if((k.size()>=3)){
						it = new_states.find(k.at(2));
						cout << "\t" << it -> second;
					}
					else
						cout << "\t0";
				}
			}
		}
			cout << endl;
	}

}

void paso_dos(vector<string> states, automata *a){
	map<string, char>::iterator it;

	for(auto n: a -> alphabet){
		vector<string> r_ia = ir_a(states, n, a);
		//add new transition
		transitions.push_back(vector_to_string(&states)+","+n+","+vector_to_string(&r_ia));
		if(r_ia.size() > 0){	
			it = new_states.find(vector_to_string(&r_ia));
			if (it == new_states.end()){
				new_states[vector_to_string(&r_ia)] = names.at(idx_names++);
				paso_dos(r_ia, a);
			}
		}
	}

}

int exists_in_vector(vector<string> *vec, string str){
	for(auto n:*vec)
		if(str == n)
			return 1;
	return 0;
}

string vector_to_string(vector<string> *vec){
	string a;
	for(auto n:*vec)
		a += n;
	return a;
}

vector<string> cerradura_epsilon(vector<string> states, automata *a){
	vector<string> r;	

	for(auto n:states){
		r.push_back(n);
		vector<string> aux = a -> next_states(n,'E');
		for(auto b:aux){
			vector<string> aux2 = {b};
			vector<string> aux1 = cerradura_epsilon(aux2, a);
			for(auto c:aux1)
				if(!exists_in_vector(&r, c))
					r.push_back(c);
		}
	}

	return r;
}

vector<string> mover(vector<string> states, char symbol, automata *a){
	vector<string> r;	

	for(auto n:states){
		vector<string> aux = a -> next_states(n,symbol);
		for(auto b:aux){
			if(!exists_in_vector(&r, b))
				r.push_back(b);
		}
	}

	return r;
}

vector<string> ir_a(vector<string> states, char symbol, automata *a){
	return cerradura_epsilon(mover(states, symbol, a), a);
}
