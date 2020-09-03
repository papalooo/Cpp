// 생성자
// vector v					v 는 빈 컨테이너
// vector v(n)				v 는 초기화 된 n 개의 원소를 갖는다
// vector v(n, x)			v 는 x 값으로 초기화 된 n 개의 원소를 갖는다
// vector v(v2)				v 는 v2 컨테이너의 복사본
// vector v(a, b)			v 는 반복자 구간 (a, b)로 초기화 된 원소를 갖는다.


// 함수
// v.assign(n, x)			v 에 x 값으로 초기화 된 n 개의 원소를 할당
// v.at(i)					v 의 i 번째 원소를 참조
// v.back()					v 의 마지막 원소를 참조
// iter = v.begin()			iter 는 v 의 첫 원소를 가르키는 반복자
// size = v.capacity()		size는 v 에 할당된 메모리의 크기
// v.clear()				v 의 모든 원소를 제거
// v.empty()				v 가 비었는지 체크
// iter = v.end()			v 의 끝을 참조하는 반복자
// iter = v.erase(p)		p 가 가르키는 원소를 제거, iter 는 다음 원소를 가르킴
// v.front()				v 의 첫번째 원소를 참조
// iter = v.insert(p, x)	p 가 가르키는 위치에 x 값을 삽입, iter 는 삽입한 원소를 가르키는 반복자
// size = v.max_size()		size 에 v 가 담을 수 있는 최대 원소의 개수
// v.pop_back()				v 의 마지막 원소를 제거
// v.push_back()			v 의 끝에 x 를 추가
// iter = v.rbegin()		v 의 역순자열의 첫 원소를 가르키는 반복자
// v.size()					v 의 원소 개수
// v.swap(v2)				v 와 v2 를 교체
// v1 == v2					v1 과 v2 의 모든 원소가 같은지 확인
// v1 != v2					v1 과 v2 의 모든 원소중 하나라도 다른 원소가 있는지 확인
// v1 < v2					v1 보다 v2 가 큰지 확인 (문자열비교)
// v[i]						v 의 i 번째 원소를 참조

#include <iostream>	
#include <vector>
using namespace std;

void main()
{
	vector<int> v(5);
	v.pop_back();
	cout << "v size : " << v.size() << endl << "v capacity : " << v.capacity() << endl;

	vector<int>().swap(v);	// 임의 벡터와 교환
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
		cout << "v1, v2 는 같습니다" << endl;
	}
	else
	{
		cout << "v1, v2는 같지않습니다." << endl;
	}
}