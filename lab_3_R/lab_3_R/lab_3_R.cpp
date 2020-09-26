// lab_3_R.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void func(int &x) {
	x = x * 2;
}

void func_array(int* mas, int j) {
	int i = 0;
	while (i < j) {
		mas[i] = 1;
		i++;
	}
}

int main()
{
	setlocale(0, "");
	/*int user_numb;
	cout << "Введите число: ";
	cin >> user_numb;
	func(user_numb);
	cout << "Ваше число стало: " << user_numb << endl;
	cout << "user_numb: " << user_numb << endl;

	int mas[10] = { 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0 };
	func_array(mas, 10);

	int j = 10;
	for (int i = 0; i < j; i++) {
		cout << "mas[" << i << "]: " << (mas[i]) << endl;
	} */

	/*int array[10] = {10, 9, 21, 13, 15, 97, 24, 123, 19, 0};
	bool flag = true;
	int temp = 0;
	while (flag) {
		flag = false;
		for (int i = 0; i < 9; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = true;
				}
			}
		}

	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "]: " << (array[i]) << endl;
	}
	system("pause");
	*/

	int array_2d[4][4] = { {2, 15, 52, 1}, {1, 6, 4, 2}, {8, 1, 0, 14}, {52, 1 , 2, 17} };
	bool flag = true;
	int temp = 0;
	while (flag) {
		flag = false;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (array_2d[i][j] > array_2d[i][j + 1]) {
					temp = array_2d[i][j];
					array_2d[i][j] = array_2d[i][j + 1];
					array_2d[i][j + 1] = temp;
					flag = true;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "array[" << i << "]" << "[" << j << "]: " << (array_2d[i][j]) << endl;
		}
	}
	system("pause");
	return 0;
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
