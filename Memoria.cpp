#include <iostream>
using namespace std;

int main () {
	int var = 5;
	
	// declaracion de la variable puntero
	int* pointVar;
	
	//almacena la direccion de var
	pointVar = &var;
	
	//imprime el valor de la var
	cout<< "var = " << endl << endl;
	
	//imprime la direccion de var
	cout<< "Direccion de la variable Var (&var) = " << &var << endl << endl;
	
	//imprime el apuntador pointVar
	cout<< "Apuntador pointVar = " << pointVar << endl << endl;
	
	//cambia el valor de var
	cout<< "Cambia el valor de var a 7: " << endl << endl;
	
	//cambia el valor de var a 7
	var = 7;
	
	//imprime el valor de var
	cout<< "var = " << endl << endl;
	
	//imprime el apuntador ponitVar
	cout<< "*pointVar = " << *pointVar << endl << endl;
	
	cout<< "Cambia el valor de pointVar a 16: " << endl;
	
	//cambia el valor de var a 16
	*pointVar = 16;
	
	//imprime el valor de var
	cout<< "var = " << var << endl << endl;
	
	//imprime el apuntador pointVar
	cout<< "Apuntador pointVar = " << pointVar << endl;
	
	//imprime el contenido de apuntador point var
	cout<< "*pointVar = " << pointVar << endl;
	
	//imprime el valor de var
	cout<< "var = " << var <<endl <<endl;
}
