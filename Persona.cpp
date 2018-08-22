#include <iostream>

#include <conio.h>

using namespace std;

struct persona {
	char nombre [20];
	int edad;
	float estatura;
};
int main(int argc, char** argv ) {
	struct persona P1, P2;
	cout << "Nombre: ";
	cin.getline(P1.nombre,20,'\n');
	cout <<  "Edad: ";
	cin >> P1.edad;
	cout << "Estatura: ";
	cin >> P1.estatura;
	//mostrar guardado
	cout << endl << "Nombre guardado: " << P1.nombre;
	cout << endl << "Edad guardada: " << P1.edad;
	cout << endl << "Estatura guardada: " << P1.estatura;
	
	getch();
	return 0;
	
}
