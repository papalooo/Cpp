// 기본 사용 형태
// map<key, value> : key와 value를 pair 형태로 선언합니다.

// m.begin()		: 첫번째 원소를 가르키는 반복자 반환
// m.end()			: 마지막 원소를 가르키는 반복자 반환
// m.insert(make_pair(key, value))	맵에 원소를 pair 형태로 추가
// m.erase(key)						맵에서 key 값에 해당한느 원소 삭제
// m.clear()						맵의 모든 원소를 삭제
// m.find(key)						key 값에 해당하는 원소를 가르키는 반복자 반환
// m.count(key)						key 값에 해당하는 원소의 개수를 반환
// m.empty()						맵 비어있는지 확인
// m.size()							맵의 원소들의 수를 반환

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