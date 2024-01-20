#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
struct Osoba
{
    string name;
    string surname;
    int age;
};

Osoba arr[10] = {{"Aga", "Ago", 10}, {"Bag", "Bog", 35}, {"Mac", "Ago", 16}, {"Bag", "Bog", 28}, {"Test", "Tis", 92}, 
{"Cas", "Hue", 51}, {"Rns", "Tsv", 27}, {"Mac", "Ago", 8}, {"Ate", "Tis", 72}, {"Tvs", "Uns", 63}};

void sort()
{
    int n = sizeof(arr)/sizeof(Osoba);

    for (int i = 0; i < n-1; i++)
    {

        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j].surname < arr[min_idx].surname)
            {
                min_idx = j;
            }else if(arr[j].surname == arr[min_idx].surname)
            {
                if(arr[j].name < arr[min_idx].name)
                {
                    min_idx = j;
                }else if(arr[j].name == arr[min_idx].name)
                {
                    if(arr[j].age < arr[min_idx].age){
                        min_idx = j;
                    }
                }
            }
            
        }
        Osoba temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void print()
{
    int n = sizeof(arr)/sizeof(Osoba);
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << " " << arr[i].surname << " " << arr[i].name << " " << arr[i].age << endl;
    }
}

void print(int a, int b)
{
    int n = sizeof(arr)/sizeof(Osoba);
    if((a >= n) || (b >= n))
    {
        cout << "Za duze indeksy";
        return;
    }
    if(b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << endl;
    for(int i = a; i < b; i++)
    {
        cout << " " << arr[i].surname << " " << arr[i].name << " " << arr[i].age << endl;
    }

}

void lowerthan(int a)
{
    cout << endl;
    int n = sizeof(arr)/sizeof(Osoba);
    for(int i = 0; i < n; i++)
    {
        if(arr[i].age <= a){
            cout << " " << arr[i].surname << " " << arr[i].name << " " << arr[i].age << endl;
        }
    }
}

int main(){
    
    print();
    sort();
    print();
    print(3,7);
    lowerthan(40);
    

    return 0;
}
