#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int arr[10] = {213,3414,531,5,123,532,6543,5215,9863,10};

int part(int start, int end)
{
 
    int pvt = arr[start];
 
    int cnt = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pvt)
            cnt++;
    }
    int pI = start + cnt;
    swap(arr[pI], arr[start]);
    int i = start, j = end;
 
    while (i < pI && j > pI) {
 
        while (arr[i] <= pvt) {
            i++;
        }
 
        while (arr[j] > pvt) {
            j--;
        }
 
        if (i < pI && j > pI) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pI;
}
 
void qSort(int start, int end)
{
    if (start >= end){
        return;
    }
 
    int p = part(start, end);

    qSort(start, p - 1);

    qSort(p + 1, end);
}

int main(){
    int n = sizeof(arr)/sizeof(int);
    qSort(0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
