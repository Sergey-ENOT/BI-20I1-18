// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

//+ , - , * , /, **, !
double getNumber() {
    double number;
    std::cout << "Введите число: ";
    std::cin >> number;
    while(std::cin.fail()) {
        std::cout << "Введите правильное число: ";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cin >> number;
    }
    std::cin.ignore(32767, '\n');
    return number;
}
char getOperand() {
    char operand;
    while (true) {
        std::cout << "Введите операцию: ";
        std::cin >> operand;
        if (operand == '+' || operand == '/' || operand == '-' || operand == '*' || operand == '**' || operand == '!') {
            return operand;
        }
        std::cout << "Введите правильный знак операции: ";
    }
    return operand;
}
double factorial(double num) {

    double result = num;
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}
double calc(double num1, char op, double num2) {
    if (op == '+') {
        return num1 + num2;
    }
    if (op == '/') {
        return num1 / num2;
    }
    if (op == '-') {
        return num2 - num1;
    }
    if (op == '*') {
        return num1 * num2;
    }
    if (op == '**') {
        return pow(num1, num2);
    }
    if (op == '!') {
        return factorial(num1);
    }
}
int main()
{
    setlocale(0, "");
    std::cout << "При вычислении факториала основным вводится второе число" << std::endl;
    double result = calc(getNumber(), getOperand(), getNumber());
    std::cout.precision(40);
    std::cout << result;
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
