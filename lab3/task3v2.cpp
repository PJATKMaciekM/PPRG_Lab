#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void artm(float a, float b, int n){
    int sum = (2*a+(n-1)*b)*n/2;
    cout << "Suma ciagu artmetycznego: " << sum << endl;
}
void geom(float a, float b, int n){
    int sum;
    if(b == 1){
        sum = a*n;
    }else{
        sum = a*((1-pow(b,n))/(1-b));
    }
    cout << "Suma ciagu geometrycznego: " << sum << endl;
}


int main(){
    float a,b;
    int n;
    cout << "Wpisz pierwszy wyraz, iloraz/roznice oraz ilosc elementow ciagu: " << endl;
    cin >> a >> b >> n;
    artm(a,b,n);
    geom(a,b,n);

    return 0;
}
