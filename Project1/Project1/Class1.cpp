#include "Class1.h"

void Class1::PrintRank()
{
	if (Score >= 90)
	{
		cout << Name << "님은 A등급입니다.";
	}
	else if (Score >= 80)
	{
		cout << Name << "님은 B등급입니다.";
	}
	else
		cout << Name << "님은 C등급입니다.";
}

Class1::Class1()
{
}

Class1::~Class1()
{
}
