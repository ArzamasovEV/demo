#include <iostream>
using namespace std;
/**
* @breef Считывает значение с клавиатуры с проверкой ввода
* @return Введённое значение
*/
double getValue();
/**
* @breef Принимает переменные и проверяет условие прохождения кирпича через отверстие.
* @param x - длина кирпича.
* @param y - ширина кирпича.
* @param z - высота кирпича.
* @param r - длина отверстия.
* @param s - ширина отверстия.
* @return Возвращает результат проверки условия.
*/
bool checkConditions(double x, double y, double z, double r, double s);
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

    bool fit = checkConditions(x, y, z, r, s);

    if (fit) {
        cout << "The brick goes through the hole." << endl;
    }
    else {
        cout << "The brick does not fit through the hole." << endl;
    }

    return 0;
}

bool checkConditions(double x, double y, double z, double r, double s) {
    return ((x <= r && y <= s) || (x <= s && y <= r) ||
        (x <= r && z <= s) || (x <= s && z <= r) ||
        (y <= r && z <= s) || (y <= s && z <= r)) {
    }
}

double getValue() {
    double value;
    cin >> value;
    if (cin.fail() || value <= 0) {
        cout << "incorrect value" << endl;
        abort();
    }
    return value;
}