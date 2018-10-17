#include "automata.cpp"

#define azul "\x1B[36m"
#define verde "\x1B[32m"
#define amarillo "\x1B[33m"
#define rojo "\033[0;31m"
#define cerrar "\x1B[00m"


int string_analysis(string current_state, int symbol_position, automata *a, string cad, string trace, string error);
int is_final_state(automata *a,string current_state, string *trace, string *error);

int main(int argc, char const *argv[]){
	
	string cad, trace = "", error = "";
	automata a(argv[1]);
	a.read();

	a.complete_automata();
	cout << "\n\n COMPLEMENTO DEL AUTÓMATA \n\n";  
	for(auto n:a.trans_func)
		cout << "\t" << n.current_state << "," << n.symbol << "," << n.next_state << endl;
	//COMPLETAR AUTÓMATA EN TRANSICIONES EPSILON A EL ESTADO DE ERROR, NO SE GUARDA EN trans_func PARA EVITAR QUE SE CICLE INFINITAMENTE
	for(auto str_state : a.states)
		if(!exists(str_state, 'E', a.trans_func))
			cout << "\t" << str_state << "," << "E,x\n";

	while(true){
		cout << "\n\nIntroduce la cadena: ";
		getline(cin, cad);

		if(cad == "salir")
			break;

		trace = "";error = "";
		int status = string_analysis(a.initial_state, 0, &a, cad, trace, error);
		if(!status)
			cout << rojo << "\n \nCADENA NO VÁLIDA" << cerrar;
		cout << "\n\n";
	}
	return 0;
}

int is_final_state(automata *a,string current_state, string *trace, string *error){	
	for(auto n: a -> final_states)
		if(current_state == n) {
			*trace += n;
			cout << azul <<"\n\tCADENA VÁLIDA\n" << cerrar;
			cout << verde << *trace << cerrar <<endl;
			if(*error != ""){
				cout << amarillo <<"\n\tERRORES LOCALES\n" << cerrar;
				cout << amarillo << *error << cerrar <<endl;
			}
			else
				cout << amarillo << "\n\tSIN ERRORES" << cerrar;
			return 1;
		}
	return 0;
}

int string_analysis(string current_state, int symbol_position, automata *a, string cad, string trace, string error){
	vector<string> v, b;
	int status, yes = 0;
	
	if(symbol_position == cad.size()){
		//ÉSTO ES PARA CHECAR SI EL ESTADO ACTUAL, EL CUAL COINCIDE CON EL FIN DE LA CADENA, TIENE TRANSICIONES EPSILON
		b = a -> next_states(current_state, 'E');
		for(auto n: b){			
			string aux = trace; 
			trace += current_state + "(E) -> ";
			status = string_analysis(n, symbol_position, a, cad, trace, error);
			if(status) yes = 1;
			trace = aux;
		}

		status = is_final_state(a, current_state, &trace, &error);
		if(status)
			yes = 1;
		return yes;
	}
	else{
		//CHECHAR ESTO 
		//string aux = trace, aux1 = error;
		//is_final_state(a,current_state, &trace, &error);
		//trace = aux;error = aux1;
		//HASTA AQUÍ	

		v = a -> next_states(current_state, cad[symbol_position]);
		if(v.size() == 0){
			error += current_state + "(" + cad[symbol_position] + ")  ";
			return string_analysis(current_state, ++symbol_position, a, cad, trace, error);
		}
		else{
			
			b = a -> next_states(current_state, 'E');
			for(auto n: b){			
				string aux = trace;
				trace += current_state + "(E) -> ";
				status = string_analysis(n, symbol_position, a, cad, trace, error);
				if(status) yes = 1;
				trace = aux;
			}

			for(auto n: v){
				string aux = trace;
				trace += current_state + "(" + cad[symbol_position]+") -> ";
				status = string_analysis(n, ++symbol_position, a, cad, trace, error); symbol_position--;
				if(status) yes = 1;
				trace = aux;
			}

		}
	}

	return yes;
}