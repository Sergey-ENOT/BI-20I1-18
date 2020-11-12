// binary_tree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>

using namespace std;

struct list {
    int field;
    struct list* left;
    struct list* right;
};

struct list* init() {
    int field;
    struct list* list;
    list = new struct list;
    field = 3;
    list->field = field;
    list->left = NULL;
    list->right = NULL;
    return list;
}

/*struct list* additem(list* parent) {
    int data = rand() % 101;

    struct list* temp;
    temp = init();
    if (parent->field > data) {
        parent->right = temp;
    }
    else if (parent->field < data) {
        parent->left = temp;
    }
    else {
        delete temp;
    }
    return parent;
}*/

struct list* addItemManual(list* root, int data) {
    struct list* temp;
    struct list* temp1;
    temp = init();
    temp->field = data;
    temp1 = root;
    while (temp1->left != NULL and temp1->right != NULL) {
        if (temp1->field > data) {
            temp1 = temp1->left;
        }
        else if (temp1->field < data) {
            temp1 = temp1->right;
        }
    }
    if (temp1->field > data) {
        temp1->left = temp;
    }
    else if (temp1->field < data) {
        temp1->right = temp;
    }
    return root;
}

/*struct list* deleteitem(list* del_item, list* root) {
    struct list* temp;
    temp = root;
    while (temp->left != del_item) {
        temp = temp->left;
    }
    temp->left = del_item->left;
    delete del_item;
    return temp;
}*/

struct list* deleteItemByValue(list* root, int data) {
    struct list* temp;
    struct list* temp1;
    temp1 = root;
    bool flag = true;
    while (data != temp1->left->field and data != temp1->right->field) {
        if (temp1->field > data) {
            temp1 = temp1->left;
        }
        else if (temp1->field < data) {
            temp1 = temp1->right;
        }
        else {
            flag = false;
        }
    }
    if (temp1->left->field == data) {
        delete temp1->left;
        temp1->left = NULL;
    }
    else {
        delete temp1->right;
        temp1->right = NULL;
    }
    return NULL;
}

void treeprint(list* root) {
    if (root != NULL) {
        cout << root->field;
        treeprint(root->left);
        treeprint(root->right);
    }
}

/*void show_list(list* root) {
    struct list* tmp;
    tmp = root;
    do {
        cout << tmp->field << " ";
        tmp = tmp->left;
    } while (tmp != NULL);
}*/

int main() {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    struct list* temp, * root;
    root = init();
    temp = root;
    struct list* del_item;
    temp = addItemManual(root, 1);
    temp = addItemManual(root, 5);
    temp = addItemManual(root, 4);
    temp = addItemManual(root, 8);
    temp = addItemManual(temp, 9);
    temp = addItemManual(temp, 2);
    treeprint(root);
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
