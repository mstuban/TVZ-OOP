#pragma once
#include "Student.h"
#include <vector>

class Kolegij
{
public:
	vector<Student*> student;
	Student *student1;
	Kolegij();
	Kolegij(Student *student);
	Kolegij(const Kolegij &kolegij);
	Kolegij(Kolegij &&privremeni);
	Kolegij& operator= (const Kolegij& kolegij);
	~Kolegij();
	void dodaj(Student *student);
};

