#include "Klassen.hpp"
#include "Dependencies\Logfile\Logfile.hpp"
#include <conio.h>

int main()
{

	cout << "BUILD: ";
#ifdef _DEBUG
	cout << "DEBUG\n\n\n";
#else
	cout << "RELEASE\n\n\n";
#endif

	gs produkte;
	gs edukte;

	cout << "Wie viele Molekuele sind auf der linken Seite?: " << endl;
	edukte.getAM();

	cout << "Wie viele Molekuele sind auf der rechten Seite?: " << endl;
	produkte.getAM();

	cout << "Geben Sie bitte zuerst die erfordelichen Daten fuer die Edukte an: \n\n";
	edukte.daten();

	
	cout << "\n--------------------------------------------------------------------------------\n";
	cout << "\nGeben Sie nun die erforderlichen Werte fuer die Produkte ein: \n\n";
	produkte.daten();

	getchar();

	return 0;
}