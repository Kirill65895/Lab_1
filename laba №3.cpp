#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); //Кодировка документа

    double R, l;
    double kof = 9.2 * pow(10, 5);
    double D = 19.1 / 4 * 3 / 10;
    double v = 0.009;
    int C = 0;
    double g[7]{1, 2, 5, 10, 20, 50, 100};
    cout << "d = " << D << endl;
    cout << "Коэффициент для R = "<< kof << endl;
    cout << "_______________________________" << endl;
    for (auto i : g)
    {
        R = g[C]*D/v;
        if (R > kof)
        {
            l = (0.021 / pow(D , 0.3));
        }
        else
        {
            l = pow(((1.5 * pow(10, -6) / D) + (1 / R)), 0.3);
        }
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << "R = " << R << "     " << "l = " << l << endl;
        ++C;
    }
}