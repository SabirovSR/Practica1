#include <iostream>
#include "Binary.h"
#include <locale>

using namespace std;

// ������� ���������, ������� ����� ������������ ��������� ������������������ �� ����� � ������

int main()
{
    //setlocale("Rus", LC_ALL);

    Binary a, b(20);

    b = a;

    b[3] = false;

    int size;
    cout << "Enter the size of the binary array: ";
    cin >> size;
    Binary c(size);

    cin >> c;

    cout << c;
}

