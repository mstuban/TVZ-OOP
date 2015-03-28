#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Spil
{
private:
	vector<int> karte;
public:
	Spil();
	~Spil();
	void ispisi();
	void napuniSpil();
	int getKartaAndPop();
};

