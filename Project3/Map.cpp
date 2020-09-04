// �⺻ ��� ����
// map<key, value> : key�� value�� pair ���·� �����մϴ�.

// m.begin()		: ù��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ
// m.end()			: ������ ���Ҹ� ����Ű�� �ݺ��� ��ȯ
// m.insert(make_pair(key, value))	�ʿ� ���Ҹ� pair ���·� �߰�
// m.erase(key)						�ʿ��� key ���� �ش��Ѵ� ���� ����
// m.clear()						���� ��� ���Ҹ� ����
// m.find(key)						key ���� �ش��ϴ� ���Ҹ� ����Ű�� �ݺ��� ��ȯ
// m.count(key)						key ���� �ش��ϴ� ������ ������ ��ȯ
// m.empty()						�� ����ִ��� Ȯ��
// m.size()							���� ���ҵ��� ���� ��ȯ

#include <iostream>
#include <map>		

using namespace std;

void main()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 100));
	m.insert(pair<int, int>(2, 200));

	pair<int, int> p(3, 300);
	m.insert(p);

	m[11] = 110;
	m[12] = 120;
	m[13] = 130;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << endl;
	}

	pair<map<int, int>::iterator, bool > pr;

	pr = m.insert(pair<int, int>(4, 500));

}