#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b; // ���������� ���� ����� ���������.
	cout << "������� ������ �����: ";
	cin >> a; // ������������ ���������� a ������-���� ��������. 
	cout << "������� ������ �����: ";
	cin >> b;
	int S = a * b; //����� ���������� S ����������� �������� ������� ���������.
	int P = 2 * (a + b);
	cout << "������� = " << S ;
	cout << "�������� = " << P ; // ����� �� �����.
	return 0;
}