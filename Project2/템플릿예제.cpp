#include <iostream>		
using namespace std;



template<typename tot>
tot TOT(tot& a, tot& b)
{
	return a + b;
}

template<typename tot>
tot SUM(tot& a, tot& b)
{
	return a + b;
}

void main()
{
	int N, M;
	float O, P;
	cout << "int형 변수 N : ";
	cin >> N;
	cout << "int형 변수 M : ";
	cin >> M;
	cout << "float형 변수 O : ";
	cin >> O;
	cout << "float형 변수 P : ";
	cin >> P;

	cout << "int형 변수들의 합 : " << TOT(N, M) << endl;
	cout.precision(2);
	cout << "float 형 변수들의 합 : " << fixed << SUM(O, P) << endl;
}