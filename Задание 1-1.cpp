#include <iostream>
using namespace std;
/**
* @breef - функция, производящая вычисление результата
* param x - число х
* param y - число y
* param z - число z
*/
void getResult(double x, double y, double z);
/**
* @breef - главная функция программы
* @return - возвращает 0, если функция выполнена верно, иначе 1.
*/
int main()
{
    const double x = 1.825;
    cout << "x = " << x << endl;
    const double y = 18.225;
    cout << "y = " << y << endl;
    const double z = -3.298;
    cout << "z = " << z << endl;
    cout << "A = " << getResultA(x, y, z) << endl;
    cout << "B = " << getResultB(x, y, z) << endl;
    return 0;
}

void getResultA(double x, double y,double z)
{
    return pow(x, (x / y)) - pow(y / x, 1 / 3)
}
void getResultB(double x, double y, double z)
{
    return (y - x) + ((y - z) / (y - x)) / (3 + (pow(z, 2) / 5))
}