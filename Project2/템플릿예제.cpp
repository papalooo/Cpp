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
	cout << "int�� ���� N : ";
	cin >> N;
	cout << "int�� ���� M : ";
	cin >> M;
	cout << "float�� ���� O : ";
	cin >> O;
	cout << "float�� ���� P : ";
	cin >> P;

	cout << "int�� �������� �� : " << TOT(N, M) << endl;
	cout.precision(2);
	cout << "float �� �������� �� : " << fixed << SUM(O, P) << endl;
}