#include "Class1.h"	


void main()
{
	Class1 class1;
	
	cout << "이름 입력 : ";
	cin >> class1.Name;
	cout << "점수 입력 : ";
	cin >> class1.Score;

	class1.PrintRank();
}