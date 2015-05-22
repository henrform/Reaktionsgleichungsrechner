#include <iostream>
#include <string>

using namespace std;

class CMole
{	
public:
	struct E
	{
		string s_name;																						// Name
		int s_anzahl;																						// Wie viele Element von einem Element vorhanden sind
	};

	~CMole();																								// Destruktor
	void MachMole(int anzahl);																				// Hier wird das Molekül erstellt
	E *mp_mole = NULL;
	
};

void CMole::MachMole(int anzahl)
{
	mp_mole = new E[anzahl];
}

CMole::~CMole()
{
	delete[] mp_mole;
	mp_mole = NULL;
}



// 
// gesamte Moleküle
//

class gs : CMole
{
private:
	int gesamteMolekuele;																									// Anzal Moleküle
	int anzahlElemente;
	CMole *mole = NULL;

public:
		 gs();
	void daten();
	void Vergleiche();
	void getAM();

};

void gs::daten()
{
	for (int i = 0; i<gesamteMolekuele; i++)
	{
		cout << "\tWie viele Elemente sind im " << i + 1 << ".Molekuel vorhanden?: ";
		anzahlElemente = NULL;
		cin >> anzahlElemente;
		mole[i].MachMole(anzahlElemente);
		cout << endl;

		for (int j = 0; j < anzahlElemente; j++)
		{
			cout << "\t\tWelche Abkuerzung hat das " << j + 1 << ".Element?: ";
			cin.ignore();
			cin >> mole[i].mp_mole[j].s_name;
			cout << endl;

			cout << "\t\t\tWie oft gibt es dieses?: ";
			cin >> mole[i].mp_mole[j].s_anzahl;
			cout << endl;
		}
	}
}

void gs::getAM()
{
	cin >> gesamteMolekuele;
	mole = new CMole[gesamteMolekuele];
	cout << endl;
}

gs::gs()
{
	anzahlElemente = 0;
	gesamteMolekuele = 0;
}
