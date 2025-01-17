#include "addition.h"
#include "comparing.h"
#include "TTI.h"

void addition(vector<char>& num1, vector<char>& num2, vector<char>& result) {
    int number1, number2, iterator;
    int flag = comparing(num1, num2);
    if (flag != 0) {
        iterator = 0;
        for (int i = 0; i < num1.size(); i++) {
            number1 = translate_to_int(num1[i]);
            number2 = translate_to_int(num2[i]);
            if (number1 + number2 + iterator < 10) {              //���� ����� ������ 10, �� ������ ��� � result �����
                int summ = number1 + number2 + iterator;
                iterator = 0;
                result.push_back(summ);
            }
            else if (number1 + number2 + iterator >= 10) {      //���� ����� >= 10, �� ��� �������� �� ��������� 10
                if (i == num1.size() - 1) {
                    int summ = number1 + number2 + iterator;
                    iterator = 1;                                 // � ������ ���������� ���������� ������� � iterator
                    result.push_back(summ - 10);
                    result.push_back(iterator);
                }
                else {
                    int summ = number1 + number2 + iterator;
                    iterator = 1;
                    result.push_back(summ - 10);
                }
            }
        }
    }
}