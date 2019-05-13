#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

using namespace std;

void Child::Input()//функция ввода для Child
{
	cout << "Введите имя ребенка" << endl;
	cin >> Name;
	cout << "Введите фамилию ребенка" << endl;
	cin >> Surname;
	cout << "Введите возраст ребенка" << endl;
	cin >> Age;
}

void Child::Display()//функция вывода для Child
{
	cout << "Имя: " << Name << endl;
	cout << "Фамилия: " << Surname << endl;
	cout << "Возраст: " << Age << endl;
}

Child::Child()
{
	Name = "Анатолий";
	Surname = "Анатольев";
	Age = 24;
}
void Tiles::getData()//функция вывода для класса Tiles
{
	cout << "Фирма: " << brand << endl;
	cout << "Ширина: " << size_h << endl;
	cout << "Высота: " << size_w << endl;
	cout << "Цена: " << price << endl;
}

void Complex::Input()//функция ввода для класса Complex
{
	cout << "Введите значение реальной части" << endl;
	cin >> re;
	cout << "Введите значение мнимой части" << endl;
	cin >> im;
}

void Complex::abs()//функция определения модуля комплексного числа 
{
	double z = sqrt(re * re + im * im);
	cout << "Модуль комплексного числа: " << z << endl;
}

void Complex::Display()//функция вывода комплексного числа
{
	cout << "z = (" << re << ") + (" << im << ")i" << endl;

	cout << "real = " << re << endl;
	cout << "imagine = " << im << endl;
}

void Vector::Input()//функция ввода координат вектора
{
	cout << "Ведите координату x" << endl;
	cin >> x;

	cout << "Ведите координату y" << endl;
	cin >> y;

	cout << "Ведите координату z" << endl;
	cin >> z;
}

void Vector::abs()//функция подсчета модуля вектора
{
	double mod;
	mod = sqrt(x * x + y * y + z * z);
	cout << "Модуль вектора: " << mod << endl;
}

void Vector::sum(Vector a, Vector b)//функция суммирования веторов
{
	Vector rez;//переменная результата

	rez.x = a.x + b.x;
	rez.y = a.y + b.y;
	rez.z = a.z + b.z;

	cout << "Координаты вектора (m + n) =( " << rez.x << ", " << rez.y << ", " << rez.z << ")" << endl;
}

void Vector::substract(Vector a, Vector b)//функция вычитания векторов
{
	Vector rez;

	rez.x = a.x - b.x;
	rez.y = a.y - b.y;
	rez.z = a.z - b.z;

	cout << "Координаты вектора (m - n) =( " << rez.x << ", " << rez.y << ", " << rez.z << ")" << endl;
}

void Vector::Display()//функция вывода координат векторов
{
	cout << "Координаты вектора: ( " << x << ", " << y << ", " << z << ")" << endl;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}