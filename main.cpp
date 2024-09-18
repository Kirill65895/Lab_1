#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); //Кодировка документа

    double angleHorizon = 14 * 3.1415926535897 / 180;
    double startSpeed = 750;
    double g = 9.81;
    double r, h, l, R_1, R_2;

    r = (2 * nach_skorost * sin(ygol_gorizonta)) / g;
    h = (pow(nach_skorost, 2) * pow(sin(ygol_gorizonta), 2)) / (2 * g);
    l = (pow(nach_skorost, 2) * sin(2 * ygol_gorizonta)) / g;
    R_1 = pow(nach_skorost, 2) / (g * cos(ygol_gorizonta));
    R_2 = (pow(nach_skorost, 2) * pow(cos(ygol_gorizonta), 2)) / g;

    cout.precision(10);
    cout << "Время полета: " << r  << endl; 
    cout << "Максимальная высота полета: " << h << endl; 
    cout << "Радиус кривизны вершины траектории: " << R_2 << endl; 
    cout << "Максимальная дальность полета: " << l << endl; 
    cout << "Радиус кривизны начала полета: " << R_1 << endl;
}
