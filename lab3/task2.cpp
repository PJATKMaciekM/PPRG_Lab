#include <iostream>
#include <cstdlib>
#include <cmath>
#include <chrono>

using namespace std;

int fac(int a){
    int temp = 1;
    for(int i = 2; i <= a; i++){
        temp = temp*i;
    }
    return temp;
}

int reminder(int a, int b){
    int c = a/b;
    return a-(b*c);
}

void binomial_iter(int a, int b, int n){
    int sol = pow(a,n);
    cout << sol << " ";
    for(int i = 1; i <= n; i++){
        sol = sol * b * (n - i + 1)/(i*a);
        cout << sol << " ";
    }
}

int binomial_rec(int a, int b, int n, int k = 0){
    if(k > n){
        return 0;
    }else{
        int coef = fac(n)/(fac(k)*fac(n-k));
        cout << (coef * pow(a,(n-k)) * pow(b,k)) << " ";
        return binomial_rec(a,b,n,++k);
    }

}

void euklides_iter(int a, int b){
    while(b != 0){
        int c = reminder(a,b);
        a = b;
        b = c;
    }
    cout << a << endl;
}

int euklides_rec(int a, int b){
    if(b == 0){
        cout << a << endl;
        return a;
    }else{
        return euklides_rec(b,reminder(a,b));
    }
}

int main(){
    int a,b,n;
    auto t1 = chrono::high_resolution_clock::now();
    auto t2 = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> ms_double;

    cin >> a >> b >> n;
    t1 = chrono::high_resolution_clock::now(); 
    binomial_iter(a,b,n); //Funkcja iteracyjna przestaje zwracac poprawne wyniki przy a = 15, b = 15, n = 6
    t2 = chrono::high_resolution_clock::now();
    ms_double = t2 - t1;
    cout << "Newton iteracja czas: " << ms_double.count() << endl;
    t1 = chrono::high_resolution_clock::now();
    binomial_rec(a,b,n); // Funkcja rekurencyjna przestaje zwracac poprawne wyniki przy a i b = 2147483646, n = 13
    t2 = chrono::high_resolution_clock::now();
    ms_double = t2 - t1;
    cout << "Newton rekurencja czas: " << ms_double.count() << endl;
    // W wiekszosic przypadkow funkcja iterujaca potrzebuje 2 razy wiecej czasu na rozwiazanie niz funkcja rekurencyjna 

    cin >> a >> b;
    t1 = chrono::high_resolution_clock::now(); 
    euklides_iter(a,b);
    t2 = chrono::high_resolution_clock::now();
    ms_double = t2 - t1;
    cout << "Euklides iteracja czas: " << ms_double.count() << endl;
    t1 = chrono::high_resolution_clock::now();
    euklides_rec(a,b);
    t2 = chrono::high_resolution_clock::now();
    ms_double = t2 - t1;
    cout << "Euklides rekurencja czas: " << ms_double.count() << endl;
    //Obie funkcje przestaja zwracac poprawne wyniki przy wartosci bliskiej intiger overflow,
    //ale funkcja iterujaca zajmuje od 4 do 7 razy dluzej niz funkcja rekurencyjna
    
    return 0;
}
