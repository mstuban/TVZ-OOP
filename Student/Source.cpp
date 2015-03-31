#include<iostream>
#include"Student.h"
using namespace std;

int main()
{
	Student Ante("1122334455");
	Student Ivica = Ante;
	Ante.SetJMBAG("6677889900"); 
	cout << Ante.GetJMBAG() << endl; // 6677889900 
	cout << Ivica.GetJMBAG() << endl; // 6677889900 ?!?!
	Student Marko; 
	Marko = Ante; 
	Marko.SetJMBAG("1234567890"); 
	cout << Marko.GetJMBAG() << endl; // 1234567890 
	cout << Ante.GetJMBAG() << endl; // 1234567890 ?!?!

	return 0;
}