#include <iostream>
#include <stdlib.h>
using namespace std;
/**
* @breef Считывает значение с клавиатуры с проверкой ввода
* @return Введённое значение
*/
double getValue();
/**
* @breef Считает площадь поверхности куба
* @param a - длина ребра куба
* @return Площадь поверхности куба
*/
double cubeSurface(double a);
/**
* @breef Считает объём куба
* @param a - длина ребра куба
* @return Объём куба
*/
double cubeVolume(double a);
/**
* @breef - главная функция программы
* @return - возвращает 0, если функция выполнена верно, иначе 1.
*/
int main()
{
    cout << "Enter the cube edge length = " << endl;
    double a = getValue();
    cout << "Area of a cube face = " << a * a << endl;
    cout << "Surface area of a cube = " << cubeSurface(a) << endl;
    cout << "Volume of a cube = " << cubeVolume(a) << endl;
    return 0;
}
double getValue()
{
    double value;
    cin >> value;
    if (cin.fail())
    {
        cout << "incorrect value" << endl;
        abort();
    }
    return value;
}
double cubeSurface(double a)
{
    return 6 * (pow(a, 2));
}
double cubeVolume(double a)
{
    return pow(a, 3);
}
