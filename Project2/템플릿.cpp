#include <iostream>	
#pragma warning(disasble : 4996)
using namespace std;
// ���ø�
// "��Ʋ" �̶�� �ǹ̸� ���ϰ� ������ ���� ��ü�� ���� ����� ���ݾ� �޶���
// ��) template<typename T>

// 1. �Լ����ø�
// 2. Ŭ���� ���ø�
// 3. ���ø� ������

// 1. �Լ� ���ø�
template<typename T>
void Swap(T& arg1, T& arg2)
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

// 2. Ŭ���� ���ø�
template<typename T>
class SampleClass
{
private :
	T data;
public : 
	T		GetData()		{ return data; }
	void	SetData(T arg)  { data = arg; }

	// 3. ���ø� ������
	T operator > (T& arg)
	{
		return (data > arg) ? data : arg;
	}
};

void main()
{
	int a = 10, b = 20;
	Swap(a, b);
	
	cout << "a : " << a << endl << "b : " << b << endl;

	SampleClass<int> A;
	A.SetData(10);
	SampleClass<char> B;
	B.SetData('A');
	SampleClass<float> C;
	C.SetData(1.1234);
	cout << "A : " << A.GetData() << endl << "B : " << B.GetData() << endl << "C : " << C.GetData() << endl;

	int test = 20;
	cout << "A�� test�� �� ū����? " << (A > test) << endl;
}