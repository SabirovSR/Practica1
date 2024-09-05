#pragma once
#include <iostream>

using namespace std;

class Binary {
private:
    bool* arr;
    int size;
public:
    // Конструктор инициализации
    Binary(int size = 10); // Значение поумолчанию пишется только в объявлении; Если много параметров, то поумолчанию можно делать только последние 

    // Конструктор копирования 
    Binary(const Binary& arr);

    // Диструктор
    ~Binary() { delete[] arr; }

    // Оператор присваивания
    Binary& operator= (const Binary&);

    // Получить размер 
    int GetSize() { return size; }

    // Оператор определения 
    bool& operator[] (int i);

    // Перегрузка для вывода 
    friend istream& operator>>(istream& in, Binary& b);

    // Перегрузка для вывода 
    friend ostream& operator<<(ostream& out, Binary& b);
};