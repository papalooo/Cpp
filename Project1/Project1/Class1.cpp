#include "Class1.h"

void Class1::PrintRank()
{
	if (Score >= 90)
	{
		cout << Name << "���� A����Դϴ�.";
	}
	else if (Score >= 80)
	{
		cout << Name << "���� B����Դϴ�.";
	}
	else
		cout << Name << "���� C����Դϴ�.";
}

Class1::Class1()
{
}

Class1::~Class1()
{
}
