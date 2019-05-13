#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

using namespace std;

int main()
{
	system("chcp 1251");

	int v;

	cout << "\nВыберите вариант класса:\n" << "1-Child\n" << "2-Tiles\n" << "3-Complex\n" << "4-Vector\n" << endl;
	cin >> v;

	switch (v)
	{
	case 1://работа с классом Child
	{
		Child player_one;
		Child player_two;

		cout << "\nВы выбрали вариант работы с классом Child\n" << endl;

		cout << "Ввод данных для первого ребенка" << endl;
		player_one.Input();//вызов функции ввода соответсвующего класса
		player_one.Display();//вызов функции вывода соответсвующего класса

		cout << "Ввод данных для второго ребенка" << endl;
		player_two.Input();
		player_two.Display();

		break;
	}
	case 2://работа с классом Tiles
		Tiles type1;
		Tiles type2;

		cout << "\nВы выбрали вариант работы с классом Tiles\n" << endl;

		cout << "Ввод данных для первого типа плитки" << endl;
		cout << "Введите название" << endl;
		cin >> type1.brand;//ввод значения для переменной brand в классе Tiles
		cout << "Введите высоту" << endl;
		cin >> type1.size_h;//ввод значения для переменной size_h в классе Tiles
		cout << "Введите ширину" << endl;
		cin >> type1.size_w;//ввод значения для переменной size_w в классе Tiles
		cout << "Введите цену" << endl;
		cin >> type1.price;//ввод значения для переменной price в классе Tiles
		type1.getData();

		cout << "Ввод данных для второго типа плитки" << endl;
		cout << "Введите название" << endl;
		cin >> type2.brand;
		cout << "Введите высоту" << endl;
		cin >> type2.size_h;
		cout << "Введите ширину" << endl;
		cin >> type2.size_w;
		cout << "Введите цену" << endl;
		cin >> type2.price;
		type2.getData();

		break;
	case 3:
		Complex num1;
		Complex num2;

		cout << "\nВы выбрали вариант работы с классом Complex\n" << endl;

		cout << "Ввод данных для первого числа" << endl;
		num1.Input();//вызов функции ввода значений
		num1.abs();//вызов функции подсчета модуля
		num1.Display();//вызов функции вывода
		cout << endl;

		cout << "Ввод данных для второго числа" << endl;
		num2.Input();
		num2.abs();
		num2.Display();
		cout << endl;

		break;
	case 4:
		Vector m;
		Vector n;

		Vector sum;//переменная для вызова функции суммы
		Vector sub;//переменная для вызова функции вычитания

		cout << "\nВы выбрали работу с классом Vector\n" << endl;

		cout << "Введите координаты первого вектора m" << endl;
		m.Input();//вызов функции ввода значений
		m.abs();//вызов функции подсчета модуля
		m.Display();//вызов функции вывода координат
		cout << endl;

		cout << "Введите координаты вектора n" << endl;
		n.Input();
		n.abs();
		n.Display();
		cout << endl;

		sum.sum(m, n);//вызов функции сложения векторов
		sub.substract(m, n);//вызов функции вычитания

		break;
	default:
		cout << "Нет введенного варианта" << endl;
		break;

	}
	system("pause");
}