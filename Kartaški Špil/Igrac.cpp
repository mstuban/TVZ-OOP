#include "Igrac.h"



Igrac::Igrac()
{
}


Igrac::~Igrac()
{
}


void Igrac::dodijeli4Karte(Spil &karte)
{
	for (int i = 0; i < 4; i++)
		this->karte.push_back(karte.getKartaAndPop());
}

void Igrac::setName(string name)
{
	this->name = name;
}

void Igrac::ispisi()
{
	cout << this->name << " ima sljedece karte: ";
	for (int i = 0; i < 4; i++)
		cout << this->karte[i]  << " ";
	cout << endl;
}

