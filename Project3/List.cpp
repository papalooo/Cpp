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