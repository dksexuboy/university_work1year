//поиск максимального значения массива через указатель массива
#include <iostream>

using namespace std;
int n = 10;
int search (int *array2,int n);
int main() {
    int array[n];

    for(int i = 0; i < n; i++) {                //циклом юзер задаёт 10 элементов массива
        cout<<"enter "<<i + 1<<" number "<<endl;
        cin>>array[i];
    }
    cout<<"max score: "<<search(array,n) <<endl;
    return 0;
}
int search (int *array2,int n) {
    int z = array2[0];

    for (int i = 1; i < n; i++) {   //похожая реализация ф-ции была в моих работах ранее
        if (array2[i] > z) {
            z = array2[i];
        }
    }
    return z;
}

