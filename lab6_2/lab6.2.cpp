#include <iostream>

using namespace std;
int n = 10;
int search (int *array,int n);
int main() {
   int array[n];

        for(int i = 0; i < n; i++) {
                cout<<"enter "<<i + 1<<" number "<<endl;
                cin>>array[i];
            }
            cout<<"max score: "<<search(array,n) <<endl;
            return 0;
        }
int search (int array[],int n) {
    int z = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > z) {
            z = array[i];
        }
}
   return z;
}

