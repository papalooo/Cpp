#include "Class1.h"	


void main()
{
	Class1 class1;
	
	cout << "�̸� �Է� : ";
	cin >> class1.Name;
	cout << "���� �Է� : ";
	cin >> class1.Score;

	class1.PrintRank();
}