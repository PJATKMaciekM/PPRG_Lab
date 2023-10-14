#include <iostream>


using namespace std;

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    if(n == 0){
        cout << "On position equal to your number Fibonacci sequence is: 0" << endl;
        return 0;
    }
    int pos = 1;
    int sum = 0;
    int adder = 1;
    while (n != pos){
        int temp = sum;
        sum = sum + adder;
        adder = temp;
        pos ++;

        
    }
    cout << "On position equal to your number Fibonacci sequence is: " << sum << endl;
    
    return 0;
}