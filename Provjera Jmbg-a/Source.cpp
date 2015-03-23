#include <iostream>
#include "Osoba.h"

using namespace std;

int main(void)
{
	Osoba osoba;
	string jmbg;

	cout << "Unesite jmbg: ";
	cin >> jmbg;
	osoba.setJmbg(jmbg);
	
	if (osoba.getJmbg() != "")
		cout << "Jmbg: " << osoba.getJmbg() << endl;

	return 0;
}