#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); //Кодировка документа

    double E = 115;
    double r = 29.7;
    int a = 0;
    double p;
    double R[10]{10, 20, 30, 40, 50, 100, 150, 200, 250, 300};
    
    while(a < 10)
    {
        p = R[a] * pow((E / (R[a] + r)), 2);
        cout << "R = " << R[a] << " " << "P = " << p << endl;
        ++a;
    }
}
