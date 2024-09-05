#pragma once
#include <iostream>

using namespace std;

class Binary {
private:
    bool* arr;
    int size;
public:
    // ����������� �������������
    Binary(int size = 10); // �������� ����������� ������� ������ � ����������; ���� ����� ����������, �� ����������� ����� ������ ������ ��������� 

    // ����������� ����������� 
    Binary(const Binary& arr);

    // ����������
    ~Binary() { delete[] arr; }

    // �������� ������������
    Binary& operator= (const Binary&);

    // �������� ������ 
    int GetSize() { return size; }

    // �������� ����������� 
    bool& operator[] (int i);

    // ���������� ��� ������ 
    friend istream& operator>>(istream& in, Binary& b);

    // ���������� ��� ������ 
    friend ostream& operator<<(ostream& out, Binary& b);
};