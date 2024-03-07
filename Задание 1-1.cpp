#include <iostream>
using namespace std;

void getResult(double x, double y, double z);
/**
* @breef - функция, производящая вычисление результата
* param x - число х
* param y - число y
* param z - число z
*/
int main()
{
    const double x = 1.825;
    cout << "x= " << x << endl;
    const double y = 18.225;
    cout << "y= " << y << endl;
    const double z = -3.298;
    cout << "z= " << z << endl;
    getResult(x, y, z);
    return 1;
}

void getResult(double x, double y,double z)
{
    cout << "A=" << pow(x, (x / y)) - pow(y / x, 1 / 3) << endl;
    cout << "B=" << (y - x) + ((y - z) / (y - x)) / (3 + (pow(z, 2) / 5)) << endl;
    abort();
}