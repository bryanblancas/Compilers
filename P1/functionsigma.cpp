#include <iostream>

using namespace std;

class FunctionSigma{
	public:
		char state;
		char symbol;
		FunctionSigma(char a, char b);	
};

FunctionSigma::FunctionSigma(char a, char b){
	state = a;
	symbol = b;
}
