#include "Student.h"


Student::Student(string ime, string prezime, Bodovi bodovi) : ime(ime), prezime(prezime), bodovi(bodovi) {}


Student::~Student()
{
}

void Student::ispis()
{
	cout << ime << " " << prezime << " ima " << bodovi.getBrBodova() << " bodova." << endl;
}
