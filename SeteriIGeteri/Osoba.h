#pragma once
#include <iostream>
#include <string>

using namespace std;

class Osoba
{
private:
	int godinaRodenja;
	string ime;
	string prezime;
public:
	Osoba();
	~Osoba();

	void setIme(string ime);
	string getIme() const;

	void setPrezime(string prezime);
	string getPrezime() const;

	void setGodinaRodenja(int godinaRodenja);
	int getGodinaRodenja() const;
};

