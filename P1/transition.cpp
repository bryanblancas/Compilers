#include <iostream>

using namespace std;

class Transition{
	public:
		char current_state;
		char symbol;
		char next_state;
		Transition(char a, char b, char c);	
};

Transition::Transition(char a, char b, char c){
	current_state = a;
	symbol = b;
	next_state = c;
}
