#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


void field(int a){
    cout << "Pole kwadratu = " << a*a << endl;
}
void field(int a, int b){
    cout << "Pole prostokata = " << a*b << endl;
}
void field(int r, float p){
    cout << "Pole kola = " << round(r*r*p) << endl;
}
void field(int a, int b, double t){
    cout << "Pole trojkata = " << a*b*t << endl;
}

int main(){
    int a,b;
    double t;
    float p = M_PI;
    char c;
    cout << "Kalkulator pola figur,wpisz litere aby wybrac figure" << endl << "k-Kwadrat, p-Prostokat, c-Kolo, t-Trojkat" << endl;
    cin >> c;
    switch (c)
    {
    case 'k':
        cout << "Wpisz dlugosc boku: " << endl;
        cin >> a;
        field(a);
        break;
    case 'p':
        cout << "Wpisz dlugosci bokow: " << endl;
        cin >> a >> b;
        field(a, b);
        break;
    case 'c':
        cout << "Wpisz dlugosc promienia: " << endl;
        cin >> a;
        field(a, p);
        break;
    case 't':
        cout << "Wpisz dlugosc podstawy i wysokosci: " << endl;
        cin >> a >> b;
        field(a, b, 0.5);
        break;
    default:
        cout << "ERROR! brak figury" << endl;
        break;
    }
    return 0;
}
