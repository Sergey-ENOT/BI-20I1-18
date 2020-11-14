// fibonacci_numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

// способ через рекурсию
int fibonacci(int number) {
    if (number == 0) {
        return 0; 
    }
    if (number == 1) {
        return 1; 
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

//способ через цикл с оп-ным количеством чисел
void fibonacci_cycle(int c) {
    int a = 0;
    int b = 1;
    int i = 0;
    cout << a << " " << b << " ";
    while (i < c - 2) {
        i++;
        if (i <= c - 2) {
            a = a + b;
            cout << a << " ";
            i++;
            if (i <= c - 2) {
                b = b + a;
                cout << b << " ";
            }
        }

    }
}

//способ с предельным числом
void fibonacci_limit_of_number(int lim) {
    int d = 0;
    int e = 1;
    int counter = 1;
    cout << d << " " << e << " ";
    bool flag = true;
    while (flag) {
        counter++;
        d = d + e;
        e = e + d;
        if (e <= lim) {   //если последнее из двух чисел меньше lim, то выводим оба
            cout << d << " " << e << " ";
        }
        else if (d <= lim) { //если последнее из двух больше lim, а первое меньше, то выводим первое
            cout << d;
        }
        else {    //если оба больше, то прерываем цикл
            flag = false;
        }
    }
    
}

int main()
{
    setlocale(0, "");
    bool flag = true;
    while (flag) {
        bool identifier = true;
        while (identifier) {
            cout << "1. Вывод чисел Фибоначчи через рекурсию\n2. Вывод чисел через цикл\n3. Вывод чисел до определённого предела" << endl;
            cout << "Выберите необходимое действие: ";
            int user_answer;
            cin >> user_answer;
            switch (user_answer) {
                case 1:
                    cout << "\nВведите количество чисел фибоначчи(рекурсия): ";
                    int position;
                    cin >> position;
                    for (int count = 0; count < position; count++) {
                        std::cout << fibonacci(count) << " ";
                    }
                    cout << "\n";
                    identifier = false;
                    break;
                case 2:
                    cout << "\nВведите количество выводимых чисел фибоначчи(цикл): ";
                    int c;
                    cin >> c;
                    fibonacci_cycle(c);
                    cout << "\n";
                    identifier = false;
                    break;
                case 3:
                    cout << "\nВведите ограничение по числам Фибоначчи: ";
                    int lim;
                    cin >> lim;
                    fibonacci_limit_of_number(lim);
                    cout << "\n";
                    identifier = false;
                    break;  
                default:
                    cout << "\nТакого варианта нет" << "\n" << endl;
                    cin.clear();
            }
        }
        cout << "\nЖелаете продолжить?[y/n]: "; //тут надо бы поставить цикл с флагом на проверку ввода и проверки на ввод строк везде, но лень
        string answer;
        cin >> answer;
        if (answer == "n") {                    //также буквы уводят циклы в бесконечность, игнорируя проверки
            flag = false;
        } 
        cin.clear();
    }
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
