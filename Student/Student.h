#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<cstring>
using namespace std;

class Student
{
private:
	char *JMBAG;
public:
	Student(void);
	Student(char *JMBAG);
	char* GetJMBAG() const;
	void SetJMBAG(char* noviJMBAG);
	~Student(void);
};

