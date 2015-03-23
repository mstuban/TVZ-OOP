#include <iostream>
#include <vector>
#include "Osoba.h"

using namespace std;

int main(void)
{
	vector<Osoba> osoba;

	for (int i = 0; i < 5; i++)
	{
		string tmpIme, tmpPrezime;
		int tmpGodinaRodenja;
		cout << "Unesite IME PREZIME i GODINU RODENJA: ";
		cin >> tmpIme >> tmpPrezime >> tmpGodinaRodenja;

		Osoba tmpOsoba;
		tmpOsoba.setIme(tmpIme);
		tmpOsoba.setPrezime(tmpPrezime);
		tmpOsoba.setGodinaRodenja(tmpGodinaRodenja);
		osoba.push_back(tmpOsoba);
	}

	for (vector<Osoba>::iterator it = osoba.begin(); it != osoba.end(); it++)
	{
		cout << it->getIme() << " " << it->getPrezime() << endl;
	}

	return 0;
}