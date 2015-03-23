#pragma once
#include <iostream>
#include <regex>
#include <string>

using namespace std;

class Osoba
{
private:
	string jmbg;
	string oib;
public:
	Osoba();

	void setJmbg(string jmbg);
	string getJmbg() const;
};

