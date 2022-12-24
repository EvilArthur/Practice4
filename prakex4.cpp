﻿// prakex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
class BetterChar
{
public:
	void display() {
		cout << (nums >> 4) << " " << (nums & 15) << endl;
	}

	void add(int number) {
		nums = nums << 4;
		nums += number;
	}

	void del(int n) {
		if (n == 1) {
			nums = nums >> 4;
		}
		else {
			nums = nums & 15;
		}
	}

private:
	unsigned char nums = 0;
};



int main()
{
	BetterChar nums;
	nums.display();
	nums.add(7);
	nums.add(14);
	nums.display();
	nums.del(1);
	nums.add(3);
	nums.display();
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.