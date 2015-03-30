#include <iostream>
#include "Kolegij.h"
#include "Student.h"

using namespace std;


int main(void)
{
	Kolegij OOP;
	OOP.dodaj(new Student("Ante Antic", "02460123456"));
	OOP.dodaj(new Student("Ivica Ivic", "02460567890"));

	Kolegij OOP2 = OOP;
	OOP.student[0]->brojBodova = 10;
	
	OOP2.student[0]->brojBodova = 20;
	cout << OOP.student[0]->brojBodova << endl; // 10
	cout << OOP2.student[0]->brojBodova << endl; // 20
	
	Kolegij Java;
	Java = OOP2;
	OOP2.student[0]->brojBodova = 10;
	Java.student[0]->brojBodova = 20;
	cout << OOP2.student[0]->brojBodova << endl; // 10
	cout << Java.student[0]->brojBodova << endl; // 20

	Kolegij novi(Kolegij(new Student("Marko Antic", "02460567894")));
	novi.student[0]->brojBodova = 30;

	cout << novi.student[0]->ime << " ima " << novi.student[0]->brojBodova << " bodova."<< endl;


	return 0;
}