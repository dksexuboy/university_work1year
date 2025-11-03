#include <iostream>
using namespace std;
void Output(int n)
{
    if(n>1)
        Output(n-1);
    cout << n << " ";
}
int main()
{
    int num = 0;
    cout << "Enter the number ";
    cin >> num;
    Output(num);
    return 0;
}
