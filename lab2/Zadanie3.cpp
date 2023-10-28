#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    string RPS[3] = {"kamien", "papier", "nozyce"};
    string ans;
    string gss;
    char a = 'y';
    while(a == 'y'){
        int N = (rand() % 3);
        ans = RPS[N];
        cout << "Wprowadz (kamien, papier albo nozyce): " << endl;
        cin >> gss;
        if(gss == ans){
            cout << "Gratulacje! Wygrales!" << endl;
        }
        else{
            cout << "Niestety przegrales" << endl;
        }
        cout << "Czy chcesz zagrac ponownie(y/n)?  ";
        cin >> a;
    }
    cout << "Dziekuje za gre!" << endl;
    return 0;
}
