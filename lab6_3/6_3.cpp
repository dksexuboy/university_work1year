#include <iostream>

using namespace std;
int n = 10;
int search (int array [],int n);
int main() {
   int array[n];

        for(int i = 0; i < n; i++) {
                cout<<"enter "<<i + 1<<" number "<<endl;
                cin>>array[i];
            }
            search(array, n);

            cout<<"all array: "<<endl;
            for (int i = 0; i < n; i++) {
                    cout << array[i] << " ";
                }
                cout << endl;
            return 0;
        }
int search (int* array,int n) {

    for (int i = 1; i < n; i++) {
        if (array[i] < 0) {
            array[i]= 0;
        }
    }
}
