#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a; // Змінна для кута альфа
    //double z1; // зміна проекту для створення нового commit 2
    double z2; //зміна проекту для створення нового commit 1

    cout << " Введіть значення кута a= "; cin >> a; 

    //z1 = 1 - (1.0 / 4.0) * pow(sin (2 * a) , 2) + cos(2 * a); // зміна проекту для створення нового commit 2
    z2 = pow(cos(a), 2) + pow(cos(a), 4); //зміна проекту для створення нового commit 1

    cout << endl;
    
    //cout << "z1 = " << z1 << endl; // зміна проекту для створення нового commit 2
    cout << "z2 = " << z2 << endl; //зміна проекту для створення нового commit 1

    cin.get();
    cin.get();
    return 0;

}