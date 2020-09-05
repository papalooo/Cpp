// �̱����̶�?
// ���α׷� ������ �ϳ��� �ν��Ͻ��� ���� �� ����� �� ���� ���� (�Ŵ���)

#include <iostream>
#pragma warning(disable : 4996)	
using namespace std;

class MySingleTon
{
private :
	static MySingleTon* instance;

	char				myName[256];
	int					myScore;
public :
	void Dextroy()
	{
		if (instance != nullptr) delete instance;
	}
	static MySingleTon* getInstance()
	{
		if (instance == nullptr)
			instance = new MySingleTon;

		return instance;
	}

	void SetName(const char* name) { strcpy(myName, name); }	
	void SetScore(int value) { myScore = value; }	

	char* GetName() { return myName; }
	int GetScore() { return myScore; }

	void Print()
	{
		cout << "name : " << myName << endl;
		cout << "score : " << myScore << endl;
	}
};

MySingleTon* MySingleTon::instance = nullptr;

void main()
{
	MySingleTon::getInstance()->SetName("������");
	MySingleTon::getInstance()->SetScore(190);
	MySingleTon::getInstance()->Print();
	MySingleTon::getInstance()->Dextroy();

}