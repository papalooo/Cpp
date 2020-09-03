// ������
// vector v					v �� �� �����̳�
// vector v(n)				v �� �ʱ�ȭ �� n ���� ���Ҹ� ���´�
// vector v(n, x)			v �� x ������ �ʱ�ȭ �� n ���� ���Ҹ� ���´�
// vector v(v2)				v �� v2 �����̳��� ���纻
// vector v(a, b)			v �� �ݺ��� ���� (a, b)�� �ʱ�ȭ �� ���Ҹ� ���´�.


// �Լ�
// v.assign(n, x)			v �� x ������ �ʱ�ȭ �� n ���� ���Ҹ� �Ҵ�
// v.at(i)					v �� i ��° ���Ҹ� ����
// v.back()					v �� ������ ���Ҹ� ����
// iter = v.begin()			iter �� v �� ù ���Ҹ� ����Ű�� �ݺ���
// size = v.capacity()		size�� v �� �Ҵ�� �޸��� ũ��
// v.clear()				v �� ��� ���Ҹ� ����
// v.empty()				v �� ������� üũ
// iter = v.end()			v �� ���� �����ϴ� �ݺ���
// iter = v.erase(p)		p �� ����Ű�� ���Ҹ� ����, iter �� ���� ���Ҹ� ����Ŵ
// v.front()				v �� ù��° ���Ҹ� ����
// iter = v.insert(p, x)	p �� ����Ű�� ��ġ�� x ���� ����, iter �� ������ ���Ҹ� ����Ű�� �ݺ���
// size = v.max_size()		size �� v �� ���� �� �ִ� �ִ� ������ ����
// v.pop_back()				v �� ������ ���Ҹ� ����
// v.push_back()			v �� ���� x �� �߰�
// iter = v.rbegin()		v �� �����ڿ��� ù ���Ҹ� ����Ű�� �ݺ���
// v.size()					v �� ���� ����
// v.swap(v2)				v �� v2 �� ��ü
// v1 == v2					v1 �� v2 �� ��� ���Ұ� ������ Ȯ��
// v1 != v2					v1 �� v2 �� ��� ������ �ϳ��� �ٸ� ���Ұ� �ִ��� Ȯ��
// v1 < v2					v1 ���� v2 �� ū�� Ȯ�� (���ڿ���)
// v[i]						v �� i ��° ���Ҹ� ����

#include <iostream>	
#include <vector>
using namespace std;

void main()
{
	vector<int> v(5);
	v.pop_back();
	cout << "v size : " << v.size() << endl << "v capacity : " << v.capacity() << endl;

	vector<int>().swap(v);	// ���� ���Ϳ� ��ȯ
	cout << "v size : " << v.size() << endl << "v capacity : " << v.capacity() << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 : " << v1[0] << endl << "v2 : " << v1.at(1) << endl << "v1 : " << v1.front() << endl <<  "v5 : " << v1.back() << endl;

	vector<int> v2;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	if (v1 == v2)
	{
		cout << "v1, v2 �� �����ϴ�" << endl;
	}
	else
	{
		cout << "v1, v2�� �����ʽ��ϴ�." << endl;
	}
}