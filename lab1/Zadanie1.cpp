#include <iostream>

using namespace std;


int main(){
    int x,y;
    cout << "Enter 2 numbers representing your interval";
    cin >> x >> y;
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    cout << "All primary numbers in your interval: " << endl;
    for(int i = x; i <= y; i++){
        bool prime_check = true;
        if (i == 0 || i == 1) {
            prime_check = false;
        }

        for (int j = 2; j <= i/2; ++j) {
            if (i % j == 0) {
                prime_check = false;
                break;
            }
        }

        if (prime_check)
            cout << i << endl;
    }
    return 0;
}
