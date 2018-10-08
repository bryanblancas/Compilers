#include <iostream>
#include <stdlib.h>
#include <string>
#include "clase.cpp"

using namespace std;

int main(int argc, char const *argv[]){
	
	if(argc != 3){
		std::cout << "Usage: hm.cpp number1 number2" << endl;
		exit(1);
	}
	int a, b, suma, resta, div, mul;
	char entrada[40];
	
	cin.getline(entrada,40); 

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	Operaciones op(a,b);

	suma = op.sumar();
	resta = op.restar();
	div = op.dividir();
	mul = op.multiplicar();

	std::cout << "introdujiste: " << entrada << endl;
	std::cout << "suma es: " << suma << endl;
	std::cout << "resta es: " << resta << endl;
	std::cout << "división es: " << div << endl;
	std::cout << "multiplicación es: " << mul << endl;

	return 0;
}
