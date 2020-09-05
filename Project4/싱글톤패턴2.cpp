#include <iostream>
#include "Characterinf.h"
#include "Inventory.h"
#pragma warning(disable : 4996)	

using namespace std;

class SystemManager
{
private:
	static SystemManager* instance;

	Characterinf* m_Char;
	Inventory* m_Inven;
public :
	void Destroy()
	{
		if (m_Char != nullptr) delete m_Char;
		if (m_Inven != nullptr) delete m_Inven;
		if (instance != nullptr) delete instance;
	}

	static SystemManager* getInstance()
	{
		if (instance == nullptr)
		{
			instance = new SystemManager;

			return instance;
		}
	}

	Characterinf* GetCharacterInf()
	{
		if (m_Char == nullptr)
		{
			m_Char = new Characterinf;

			return m_Char;
		}
	}
	Inventory* GetInventory()
	{
		if (m_Inven == nullptr)
		{
			m_Inven = new Inventory;

			return m_Inven;
		}
	}

	void Print()
	{
		cout << "name : " << m_Char->name << endl;
		cout << "gold : " << m_Inven->gold << endl;
	}
};

SystemManager* SystemManager::instance = nullptr;

void main()
{
	strcpy(SystemManager::getInstance()->GetCharacterInf()->name, "Àå¼öÇõ");
	SystemManager::getInstance()->GetInventory()->gold = 10000;
	SystemManager::getInstance()->Print();
	SystemManager::getInstance()->Destroy();
}