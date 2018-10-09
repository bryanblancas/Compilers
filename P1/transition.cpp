#include <iostream>
#include <string>
using namespace std;

class Transition{
	public:
		string current_state;
		char symbol;
		string next_state;
		Transition(string a, char b, string c);	
};

Transition::Transition(string a, char b, string c){
	current_state = a;
	symbol = b;
	next_state = c;
}
