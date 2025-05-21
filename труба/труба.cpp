#include <iostream>
using namespace std;
int main()
{
    setlocale (0,"");
    double t, Hg, d, L, Q;
    cout << "Введите t" << endl;
    cin >> t;
    cout << "Введите Hg" << endl;
    cin >> Hg;
    cout << "Введите d" << endl;
    cin >> d;
    cout << "Введите L" << endl;
    cin >> L;
    cout << "Введите Q" << endl;
    cin >> Q;
     double Re = d / pow(10, -6);
    if (Re < 2320)
    {
        L = 64 / Re;
    }
    else
    {
        L = pow((0.3 / Re), 0.25);
    }
    double W = (0.2 * Q) / (5.7 * d * t);
    double h = L * (L / (1.96 * d * d));
}
cout << "Есть поток турбулентности"<< endl;
double H = Hg + h + 5;
cout << W << endl;
cout << H << endl;
}
