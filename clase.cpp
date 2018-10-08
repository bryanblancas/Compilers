#include <iostream>

using namespace std;

class Operaciones{
	private:
		int a, b;
	public:
		Operaciones(int a2, int b2);
		int sumar();
		int restar();
		int dividir();
		int multiplicar();
};

Operaciones::Operaciones(int a2, int b2){
	a = a2;
	b = b2;
}

int Operaciones::sumar(){
	return a+b;
}

int Operaciones::restar(){
	return a-b;
}
int Operaciones::dividir(){
	return a/b;
}
int Operaciones::multiplicar(){
	return a*b;
}