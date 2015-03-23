#include "Osoba.h"


Osoba::Osoba()
{
}


Osoba::~Osoba()
{
}


void Osoba::setIme(string ime)
{
	this->ime = ime;
}
string Osoba::getIme() const
{
	return this->ime;
}

void Osoba::setPrezime(string prezime)
{
	this->prezime = prezime;
}

string Osoba::getPrezime() const
{
	return this->prezime;
}

void Osoba::setGodinaRodenja(int godinaRodenja)
{
	this->godinaRodenja = godinaRodenja;
}

int Osoba::getGodinaRodenja() const
{
	return this->godinaRodenja;
}