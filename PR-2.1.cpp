#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a; // ����� ��� ���� �����
    //double z1; // ���� ������� ��� ��������� ������ commit 2
    double z2; //���� ������� ��� ��������� ������ commit 1

    cout << " ������ �������� ���� a= "; cin >> a; 

    //z1 = 1 - (1.0 / 4.0) * pow(sin (2 * a) , 2) + cos(2 * a); // ���� ������� ��� ��������� ������ commit 2
    z2 = pow(cos(a), 2) + pow(cos(a), 4); //���� ������� ��� ��������� ������ commit 1

    cout << endl;
    
    //cout << "z1 = " << z1 << endl; // ���� ������� ��� ��������� ������ commit 2
    cout << "z2 = " << z2 << endl; //���� ������� ��� ��������� ������ commit 1

    cin.get();
    cin.get();
    return 0;

}