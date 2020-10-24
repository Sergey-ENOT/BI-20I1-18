// line_lists.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

struct list {
    int field;
    struct list* subling;
};

struct list* init() {
    int field;
    struct list* list;
    list = new struct list;
    field = rand() % 101;
    list->field = field;
    list->subling = NULL;
    return list;
}

struct list* additem(list* list) {
    struct list* temp;
    temp = init();
    list->subling = temp;
    temp->field = rand() % 101;
    return temp;
}

struct list* deleteitem(list* del_item, list* root) {
    struct list* temp;
    temp = root;
    while (temp->subling != del_item) {
        temp = temp->subling;
    }
    temp->subling = del_item->subling;
    delete del_item;
    return temp;
}

void show_list(list* root) {
    struct list* tmp;
    tmp = root;
    do {
        cout << tmp->field << " ";
        tmp = tmp->subling;
    } while (tmp != NULL);
}

int main() {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    struct list* temp, * root;
    root = init();
    temp = root;
    struct list* del_item;
    for (int i = 1; i < 20; i++) {
        temp = additem(temp);
    }
    del_item = root;
    for (int n = 1; n < 15; n++) {
        del_item = del_item->subling;
    }
    cout << "Массив  до  проведения  операций: ";
    show_list(root);
    cout << endl;
    deleteitem(del_item, root);
    cout << "Массив после проведения операций: ";
    show_list(root);
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
