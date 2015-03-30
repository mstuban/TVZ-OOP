#pragma once
#include <string>
using namespace std;


class Student
{
public:
	int brojBodova;
	string ime;
	string jmbag;

	Student(string ime, string jmbag);
	~Student();
};

