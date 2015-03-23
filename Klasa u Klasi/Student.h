#pragma once
#include <iostream>
#include <string>
#include "Bodovi.h"
using namespace std;

class Student
{
private:
	Bodovi bodovi;
	string ime, prezime;
public:
	Student(string ime, string prezime, Bodovi bodovi);
	void ispis();
	~Student();
};

