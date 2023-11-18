#include <iostream>
#include <cstdlib>

using namespace std;

int cube_check(int a, int b){
    if(b*b*b == a){
        return 1;
    }else{
        return 0;
    }
    return 0;
}


int main(){
    int a,b;
    cin >> a >> b;
    cout << cube_check(a,b) << endl;
    return 0;
}
