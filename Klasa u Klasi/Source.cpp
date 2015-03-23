#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;


int main(void)
{
	vector<Student> vs
	{
		Student("Marko", "Maric", Bodovi(10)),
		Student("Roko", "Kostan", Bodovi(50)),
		Student("Ante", "Nincevic", Bodovi(30))
	};

	for (int i = 0; i < vs.size(); i++)
	{
		vs[i].ispis();
	}

	return 0;
}