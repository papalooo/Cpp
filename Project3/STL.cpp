#include <iostream>	
#include <vector>

using namespace std;

void main()
{
	vector<int> a;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);
	
	// �ݺ���
	vector<int>::iterator iter = a.begin();

	cout << *iter << endl;
	cout << iter[0] << endl;
	cout << iter[1] << endl;

	// +=����
	cout << "a �ι�°" << endl;
	iter += 1;
	cout << *iter << endl;

	// �ݺ�
	cout << "a �� ��� ����" << endl;
	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << endl;
	}
}