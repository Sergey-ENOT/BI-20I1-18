#include <iostream>
#include <vector>
#include <string>
#include "GetNumber1.h"

using namespace std;

vector<char> getNumber1(vector<char>& number, char& symbol) {
    //todo �������� ���������� ������ � ����� � ������ �����.
    //todo ����������� ����������� �������� ������������� �����.
    bool condition = true;
    while (condition) {
        std::cout << "������� ������ �����: ";
        string Number;
        getline(cin, Number);
        for (int i = Number.length() - 1; i >= 0; i--) {
            if (Number[i] == '0' || Number[i] == '1' || Number[i] == '2' || Number[i] == '3' ||
                Number[i] == '4' || Number[i] == '5' || Number[i] == '6' || Number[i] == '7' ||
                Number[i] == '8' || Number[i] == '9') {
                number.push_back(Number[i]);
                if (i == 0) {
                    condition = false;
                }
            }
            else {
                if (i == 0) {
                    if (Number[i] == '-') {
                        symbol = '-';
                        condition = false;
                    }
                    else if (Number[i] == '+') {
                        symbol = '+';
                        condition = false;
                    }
                }
                else {
                    cout << "�� ����� ������������ �����" << endl;
                    number.clear();
                    break;
                }
            }
        }
    }
    cout << "\n";
    return number;
}