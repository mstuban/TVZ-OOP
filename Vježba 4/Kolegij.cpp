#include "Kolegij.h"


Kolegij::Kolegij()
{
}


Kolegij::~Kolegij()
{
}

Kolegij::Kolegij(const Kolegij &kolegij)
{
	for (int i = 0; i < kolegij.student.size(); i++)
	{
		Student *tmp = new Student(kolegij.student[i]->ime, kolegij.student[i]->jmbag);
		this->student.push_back(tmp);
	}
}

Kolegij::Kolegij(Kolegij &&privremeni)
{
	for (int i = 0; i < privremeni.student.size(); i++)
	{
		student[i] = privremeni.student[i];
		privremeni.student[i] = NULL;
	}
}


void Kolegij::dodaj(Student *student)
{
	Student *tmp1 = new Student(student->ime, student->jmbag);
	this->student.push_back(tmp1);
}

Kolegij &Kolegij::operator = (const Kolegij &kolegij)
{
	if (this != &kolegij)
	{ 
		for (int i = 0; i < kolegij.student.size(); i++)
		{
			Student *tmp = new Student(kolegij.student[i]->ime, kolegij.student[i]->jmbag);
			this->student.push_back(tmp);
		}
	} 
	return *this;
}

Kolegij::Kolegij(Student *student)
{
	Student *tmp = new Student(student->ime, student->jmbag);
	this->student.push_back(tmp);
}