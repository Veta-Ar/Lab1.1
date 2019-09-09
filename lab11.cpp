#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b; // объявление двух целых элементов.
	cout << "Введите первое число: ";
	cin >> a; // присваивание переменной a какого-либо значения. 
	cout << "Введите второе число: ";
	cin >> b;
	int S = a * b; //новой переменной S присваиваем значение площади элементов.
	int P = 2 * (a + b);
	cout << "Площадь = " << S ;
	cout << "Периметр = " << P ; // вывод на экран.
	return 0;
}