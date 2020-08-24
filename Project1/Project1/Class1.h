#pragma once
#include <iostream>	
using namespace std;

class Class1
{
	
	// public	: 접근 어디서나 가능 
	// protected: 자기 자신과 상속받은 클래스에서 접근
	// private	: 자기자신만 접근

public:
	char Name[256];
	int Score = 90;

	void PrintRank();
public:
	Class1();
	~Class1();
};

