﻿// lab_4_R.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout << "Write number: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

	bool flag = true;
	int temp = 0;
	while (flag) {
		flag = false;
		for (int i = 0; i < (n - 1); i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = true;
			}
		}
	}

	/*
	temp = *array;
	*array = *(array + (n - 1));
	*(array + (n - 1)) = temp;
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	*/
	
	int b = 1;
	int m = n;

	for(int i = 0; i < (n / 2) + 1; i++) {
		temp = *(array + (n - m));
		*(array + (n - m)) = *(array + (n - b));
		*(array + (n - b)) = temp;
		for (int i = 0; i < n; i++) {
			cout << array[i] << " ";
		}
		cout << "\n";
		m--;
		b++;
		//cout << "m: " << m << endl;
		//cout << "b: " << b << endl;
	}

	
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
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
