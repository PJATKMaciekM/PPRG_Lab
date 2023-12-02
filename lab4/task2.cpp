#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int A[2][3] = {
    {1,4,-2},
    {3,5,-6}
};
int B[3][4] = {
    {5,2,8,-1},
    {3,6,4,5},
    {-2,9,7,-3},
};

int C[2][4] = {0};

void matrixmulti(){
    for(int k = 0; k < 2; k++){
        for(int i = 0; i < 4; i++){
            int sum = 0;
            for(int j = 0; j < 3; j++){
                sum = sum + A[k][j] * B[j][i];
            }
            C[k][i] = sum;
        }
    }
}

int main(){
    matrixmulti();
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
