#include <iostream>

using namespace std;
/**
* @breef Считывает значение с клавиатуры с проверкой ввода
* @return Введённое значение
*/
double getValue();
/**
 * @brief Проверяет условия прохождения кирпича через отверстие
 * @param x Длина кирпича
 * @param y Ширина кирпича
 * @param z Высота кирпича
 * @param r Длина отверстия
 * @param s Ширина отверстия
 * @return 0, если кирпич проходит, иначе 1
 */
int checkConditions(double x, double y, double z, double r, double s);
/**
* @breef - главная функция программы
* @return - возвращает 0, если функция выполнена верно, иначе 1.
*/
int main() {
    cout << "Enter the length of the brick = ";
    double x = getValue();
    cout << "Enter the width of the brick = ";
    double y = getValue();
    cout << "Enter the height of the brick = ";
    double z = getValue();
    cout << "Enter hole length = ";
    double r = getValue();
    cout << "Enter hole width = ";
    double s = getValue();
    checkConditions(x, y, z, r, s);

    return 0;
}
int checkConditions(double x, double y, double z, double r, double s) {
    if ((x <= r && y <= s) || (x <= s && y <= r) ||
        (x <= r && z <= s) || (x <= s && z <= r) ||
        (y <= r && z <= s) || (y <= s && z <= r)) {
        cout << "The brick goes through the hole." << endl;
        return 0;
    }
    else {
        cout << "The brick does not fit through the hole." << endl;
        return 1;
    }
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