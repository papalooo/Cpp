// �긴�������̶�?
// �߻�ȭ �κа� ���� �κ��� �и��ϴ� ����
// ��ɵ�� ������ ������ ������ �и��ϴ� ������� �� Ŭ������ ���� �ٸ� ���������� �־�
// ���� �����ϰ� ����� ������ ����


#include <iostream>

#include <iomanip>

#pragma warning(disable : 4996)	

using namespace std;

__interface GetAreaMethod
{
	virtual const char* GetInfo() = 0;
	virtual double	GetArea(int, int) = 0;
};

class GetAreaTriangleMethod : public GetAreaMethod
{
	virtual const char* GetInfo() { return "�� ������ �ﰢ���Դϴ�."; }
	virtual double GetArea(int width, int height) { return static_cast<double>(width)* height / 2; }
};

class GetAreaRectangleMethod : public GetAreaMethod
{
	virtual const char* GetInfo() { return "�� ������ �簢���Դϴ�."; }	
	virtual double	GetArea(int width, int height) { return static_cast<double>(width) * height; }
};

class Shape
{
protected :
	GetAreaMethod* m_pMethod = nullptr;

protected :
	int				width;
	int				height;

public:
	~Shape() { if (m_pMethod != nullptr) delete m_pMethod; }	

	double			GetArea() { return m_pMethod->GetArea(width, height); }	
	const char* GetInfo() { return m_pMethod->GetInfo(); }	

	void		SetWidth(int value) { width = value; }	
	void		SetHeight(int value) { height = value; }	
	int			GetWidth() { return width; }	
	int			GetHeight() { return height; }	

};

class Triangle : public Shape
{
public :
	Triangle(GetAreaMethod* pMethod) { m_pMethod = pMethod; }	
};

class Rectangle : public Shape
{
public :
	Rectangle(GetAreaMethod* pMethod) { m_pMethod = pMethod; }	
};

int main()
{
	Triangle tri(new GetAreaTriangleMethod);
	Rectangle rect(new GetAreaRectangleMethod);

	tri.SetWidth(5);
	tri.SetHeight(10);

	rect.SetWidth(5);
	rect.SetHeight(10);

	cout << tri.GetInfo() << endl;
	cout << "�ﰢ���� ���� : " << tri.GetArea() << endl;
	cout << rect.GetInfo() << endl;
	cout << "�簢���� ���� : " << rect.GetArea() << endl;
}