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