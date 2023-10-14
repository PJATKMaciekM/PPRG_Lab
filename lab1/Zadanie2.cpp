#include <iostream>

using namespace std;

int SumOfDivisors(int a){
    int sol = 0;
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            sol = sol + i;
        }
    }
    return sol;
}

int main(){
    int x,y;
    cout << "Enter 2 numbers representing your interval";
    cin >> x >> y;
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    for(int i = x; i <= y; i++){
        int sum = SumOfDivisors(i);
        if((sum >= x) && (sum <= y)){
            if((SumOfDivisors(sum) == i) && (sum != i) && (i < sum)){
                cout << "Para liczb zaprzyjaznionych to: " << i << " oraz " << sum << endl;
            }
        }
    }
    return 0;
}
