#pragma once
#include <iostream>	
using namespace std;

class Class1
{
	
	// public	: ���� ��𼭳� ���� 
	// protected: �ڱ� �ڽŰ� ��ӹ��� Ŭ�������� ����
	// private	: �ڱ��ڽŸ� ����

public:
	char Name[256];
	int Score = 90;

	void PrintRank();
public:
	Class1();
	~Class1();
};

