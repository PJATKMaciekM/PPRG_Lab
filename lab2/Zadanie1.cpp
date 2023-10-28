#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int r = 0;
    int n = 0;
    int s = 0;
    cout << "Podaj pierwszy element ciagu, roznice oraz liczbe elementow oddzielone spacja" << endl;
    cin >> a >> r >> n;
    s = ((2*a + (n-1)*r)/2)*n;
    cout << "Suma: " << s << endl;

    return 0;
}
