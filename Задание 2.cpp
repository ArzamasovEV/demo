﻿#include <iostream>
#include <stdlib.h>
using namespace std;
/**
* @breef Считывает значение с клавиатуры с проверкой ввода
* @return Введённое значение
*/
double getValue();
/**
* @breef Проверяет число на то, чтобы оно не было равно нулю или меньше нуля
* @return Введённое значение
*/
void checkValue(double value);
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
* @return - возвращает 0, если функция выполнена верно, иначе 1
*/
int main()
{
    cout << "Enter the cube edge length = " << endl;
    double a = getValue();
    checkValue(a);
    cout << "Area of a cube face = " << a * a << endl;
    cout << "Surface area of a cube = " << cubeSurface(a) << endl;
    cout << "Volume of a cube = " << cubeVolume(a) << endl;
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
void checkValue(double value)
{
    if (value <= 0)
    {
        abort();
    }
}
double cubeSurface(double a)
{
    return 6 * (pow(a, 2));
}
double cubeVolume(double a)
{
    return pow(a, 3);
}