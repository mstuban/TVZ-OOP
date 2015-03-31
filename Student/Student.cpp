#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;

Student::Student(void)
{
}

Student::Student(char *JMBAG)
{
	this->JMBAG = new char[11];
	strcpy_s(this->JMBAG, 11, JMBAG);
}


char* Student::GetJMBAG() const
{
	return JMBAG;
}

void Student::SetJMBAG(char* noviJMBAG)
{
	strcpy_s(this->JMBAG, 11, noviJMBAG);
}



Student::~Student(void)
{
	delete []this->JMBAG;
}
