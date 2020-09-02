#include <iostream>	
using namespace std;

// list lt					lt �� �����̳�
// list lt(n)				lt �� �⺻������ �ʱ�ȭ �� n���� ���Ҹ� ��������
// list lt(n,x)				lt �� x������ �ʱ�ȭ �� n���� ���Ҹ� ��������
// list lt(lt2)				lt �� lt2 �����̳��� ���纻�̴�
// list lt(a,b)				lt �� �ݺ��ڱ��� [a, b]�� �ʱ�ȭ �� ���ҵ��� ���´�

// �Լ�
// lt.assign(n, x)			lt �� x������ �ʱ�ȭ �� n���� ���Ҹ� �Ҵ�
// lt.assign(a, b)			lt �� �ݺ��� ���� (a, b)�� �Ҵ�
// lt.back()				lt �� ������ ���Ҹ� ����
// iter = lt.begin()		iter �� lt�� ù �̾�Ҹ� ����Ŵ
// lt.clear()				lt �� ��� ���Ҹ� ����
// lt.empty()				lt �� ������� üũ
// iter = it.end()			iter �� lt�� ���� ����Ű�� �ݺ���
// iter = lt.erase(p)		p�� ����Ű�� ���Ҹ� ����, iter�� ���� ���Ҹ� ����Ŵ
// iter = lt.erase(a,b)		�ݺ��� ���� (a,b) �� ��� ���Ҹ� ���� ,iter�� ���� ���Ҹ� ����Ŵ
// lt.front()				lt �� ù��° ���Ҹ� ����
// iter = lt.insert(p, x)   p�� ����Ű�� ��ġ�� x���� ����, iter �� ������ ���Ҹ� ����Ű�� �ݺ���
// lt.insert(p, n, x)		p�� ����Ű�� ��ġ�� n���� ���Ҹ� ����, ���� x
// lt.insert(p, a, b)		p�� ����Ű�� ��ġ�� �ݺ��ڱ��� (a,b)�� ���Ҹ� ����
// max = lt.max_size()		lt�� ���� �� �ִ� �ִ� ������ ������ max�� ��ȯ
// lt.merge(lt2)			lt2�� lt�� �պ����� ��
// lt.merge(lt2, pred)		lt2�� lt�� �պ�����, pred(������)�� ���
// lt.pop_back()			lt�� ������ ���Ҹ� ����
// lt.pop_front()			lt�� ù��° ���Ҹ� ����
// lt.push_back(x)			lt�� ���� x�� �߰�
// lt.push_front(x)			lt�� �� �ʿ� x�� �߰�
// iter = lt.rbegin()		iter�� lt�� �� �������� ù ���Ҹ� ����Ű�� �ݺ���
// lt.remove(x)				x ���Ҹ� ��� ����
// lt.remove_if(pred)		pred�� ���� ���Ҹ� ��� ����
// lt.size()				lt ������ ����
// lt.sort(pred)			lt �� ��� ���Ҹ� pred �������� ����
// lt.splice(p, lt2)		p�� ����Ű�� ��ġ�� lt2�� ��� ���Ҹ� �߶����
// lt.swap(lt2)				lt�� lt2�� ���Ҹ� ��ü
// lt.unique()				������ ������ ���� ���ٸ� ������ ������ �������� ����
#include <list>	

void main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);


	list<int>::iterator iter;
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;


	iter = lt1.begin();
	++iter; // 20
	++iter; // 30

	lt1.splice(iter, lt2);	// iter �� ����Ű�� lt�� ��ġ�� lt2�� ��� ���Ҹ� �߶� ����

	cout << "splice lt1 : ";	// lt1 �� 30�ڸ����� lt2 �� �߶� �ٿ���
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "splice lt2 : ";	// lt2�� �߶����� �������
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	lt1.reverse(); // ����Ʈ�� �������� ������.
	cout << "reverse lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	lt1.push_front(50);
	lt1.push_front(50);
	lt1.push_back(10);
	lt1.push_back(10);
	cout << "r push lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;


	lt1.unique();		// ������ �ߺ����Ҹ� ��ħ (�յڷθ� ������ ��ħ)
	//lt1.push_front(500);
	lt1.unique();
	cout << "unique lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	lt1.sort();		// �������� ����
	cout << "sort lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

}


