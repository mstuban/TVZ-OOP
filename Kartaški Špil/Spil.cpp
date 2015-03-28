#include "Spil.h"


Spil::Spil()
{
	this->napuniSpil();
}


Spil::~Spil()
{
}

void Spil::napuniSpil()
{
	for (int i = 0; i < 51; i++)
		karte.push_back(i + 1);
	random_shuffle(karte.begin(), karte.end());
}

int Spil::getKartaAndPop()
{
	int tmpKarta = this->karte.back();
	this->karte.pop_back();
	return tmpKarta;
}

void Spil::ispisi()
{
	for (int i = 0; i < this->karte.size(); i++)
		cout << this->karte[i] << " ";
	cout << endl;
}