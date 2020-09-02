#include <iostream>	
using namespace std;

// list lt					lt 는 컨테이너
// list lt(n)				lt 는 기본값으로 초기화 된 n개의 원소를 갖고있음
// list lt(n,x)				lt 는 x값으로 초기화 된 n개의 원소를 갖고있음
// list lt(lt2)				lt 는 lt2 컨테이너의 복사본이다
// list lt(a,b)				lt 는 반복자구간 [a, b]로 초기화 된 원소들을 갖는다

// 함수
// lt.assign(n, x)			lt 에 x값으로 초기화 된 n개의 원소를 할당
// lt.assign(a, b)			lt 를 반복자 구간 (a, b)로 할당
// lt.back()				lt 의 마지막 원소를 참조
// iter = lt.begin()		iter 는 lt의 첫 ㅜ언소를 가르킴
// lt.clear()				lt 의 모든 원소를 제거
// lt.empty()				lt 가 비었는지 체크
// iter = it.end()			iter 는 lt의 끝을 가르키는 반복자
// iter = lt.erase(p)		p가 가르키는 원소를 제거, iter는 다음 원소를 가르킴
// iter = lt.erase(a,b)		반복자 구간 (a,b) 의 모든 원소를 제거 ,iter는 다음 원소를 가르킴
// lt.front()				lt 의 첫번째 원소를 참조
// iter = lt.insert(p, x)   p가 가르키는 위치에 x값을 삽입, iter 는 삽입한 원소를 가르키는 반복자
// lt.insert(p, n, x)		p가 가르키는 위치에 n개의 원소를 삽입, 값은 x
// lt.insert(p, a, b)		p가 가르키는 위치에 반복자구간 (a,b)의 원소를 삽입
// max = lt.max_size()		lt가 담을 수 있는 최대 원소의 개수를 max에 반환
// lt.merge(lt2)			lt2를 lt로 합병정렬 함
// lt.merge(lt2, pred)		lt2를 lt로 합병정렬, pred(조건자)를 사용
// lt.pop_back()			lt의 마지막 원소를 제거
// lt.pop_front()			lt의 첫번째 원소를 제거
// lt.push_back(x)			lt의 끝에 x를 추가
// lt.push_front(x)			lt의 앞 쪽에 x를 추가
// iter = lt.rbegin()		iter는 lt의 역 순차열의 첫 원소를 가르키는 반복자
// lt.remove(x)				x 원소를 모두 제거
// lt.remove_if(pred)		pred가 참인 원소를 모두 제거
// lt.size()				lt 원소의 개수
// lt.sort(pred)			lt 의 모든 원소를 pred 기준으로 정렬
// lt.splice(p, lt2)		p가 가르키는 위치에 lt2의 모든 원소를 잘라붙임
// lt.swap(lt2)				lt와 lt2의 원소를 교체
// lt.unique()				인접한 원소의 값이 같다면 유일한 원소의 순차열로 만듦
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

	lt1.splice(iter, lt2);	// iter 가 가르키는 lt의 위치에 lt2의 모든 원소를 잘라 붙임

	cout << "splice lt1 : ";	// lt1 의 30자리부터 lt2 가 잘라 붙여짐
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "splice lt2 : ";	// lt2는 잘라져서 비어있음
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	lt1.reverse(); // 리스트를 역순으로 뒤집음.
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


	lt1.unique();		// 인접한 중복원소를 합침 (앞뒤로만 같으면 합침)
	//lt1.push_front(500);
	lt1.unique();
	cout << "unique lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	lt1.sort();		// 오름차순 정렬
	cout << "sort lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

}


