#include "Osoba.h"


Osoba::Osoba()
{
}

void Osoba::setJmbg(string jmbg)
{
	if (!regex_match(jmbg, regex("[0-9]{13}")))
	{
		cout << "Unesen je neispravan JMBG." << endl;
		return;
	}

	this->jmbg = jmbg;
}

string Osoba::getJmbg() const
{
	return this->jmbg;
}