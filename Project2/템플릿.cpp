#include <iostream>	
#pragma warning(disasble : 4996)
using namespace std;
// 템플릿
// "형틀" 이라는 의미를 지니고 있으며 들어가는 객체에 따라 결과가 조금씩 달라짐
// 예) template<typename T>

// 1. 함수템플릿
// 2. 클래스 템플릿
// 3. 템플릿 연산자

// 1. 함수 템플릿
template<typename T>
void Swap(T& arg1, T& arg2)
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

// 2. 클래스 템플릿
template<typename T>
class SampleClass
{
private :
	T data;
public : 
	T		GetData()		{ return data; }
	void	SetData(T arg)  { data = arg; }

	// 3. 템플릿 연산자
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
	cout << "A와 test중 더 큰값은? " << (A > test) << endl;
}