#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a; // ����� ��� ���� �����
    double z1; // ����� ��� �������� z1
    double z2; // ����� ��� �������� z2

    cout << " ������ �������� ���� a= "; cin >> a; 

    z1 = 1 - (1.0 / 4.0) * pow(sin (2 * a) , 2) + cos(2 * a); // ������� ����� 1
    z2 = pow(cos(a), 2) + pow(cos(a), 4); // ������� ����� 2

    cout << endl;
    
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;

}