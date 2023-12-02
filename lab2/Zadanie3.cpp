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
        cout << "Wybor komputera: " << ans << endl;
        if(gss == ans){
            cout << "Remis!" << endl;
        }else if (((gss == RPS[0])&&(ans == RPS[2])) || ((gss == RPS[1])&&(ans == RPS[0])) || (gss == RPS[2])&&(ans == RPS[1]))
        {
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
