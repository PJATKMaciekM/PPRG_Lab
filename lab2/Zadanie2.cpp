#include <iostream>
#include <string>
using namespace std;

int main(){
    string password = "test";
    string guess;
    cout << "Zgadnij hasło, wpisz STOP aby przerwac" << endl;
    while(1){
        cin >> guess;
        if(guess == password){
            cout << "Gratulacje haslo to: " << password << endl;
            break; 
        }else if(guess == "STOP"){
            cout << "Przerywanie zgadywania" << endl;
            break;
        }
        else{
            cout << "Nieprawidlowe haslo, sprobuj ponownie" << endl;
        }
    }
    return 0;
}
