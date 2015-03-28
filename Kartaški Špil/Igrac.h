#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Spil.h"

using namespace std;

class Igrac
{
private:
	vector<int> karte;
	string name;
public:
	Igrac();
	~Igrac();
	void dodijeli4Karte(Spil &karte);
	void setName(string name);
	void ispisi();
};

