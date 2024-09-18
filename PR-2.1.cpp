#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a; // Змінна для кута альфа
    double z1; // Змінна для значення z1
    double z2; // Змінна для значення z2

    cout << " Введіть значення кута a= "; cin >> a; 

    z1 = 1 - (1.0 / 4.0) * pow(sin (2 * a) , 2) + cos(2 * a); // Приклад номер 1
    z2 = pow(cos(a), 2) + pow(cos(a), 4); // Приклад номер 2

    cout << endl;
    
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;

}