// 싱글톤이란?
// 프로그램 내에서 하나의 인스턴스만 생성 후 사용할 때 쓰는 패턴 (매니저)

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
	MySingleTon::getInstance()->SetName("강아지");
	MySingleTon::getInstance()->SetScore(190);
	MySingleTon::getInstance()->Print();
	MySingleTon::getInstance()->Dextroy();

}