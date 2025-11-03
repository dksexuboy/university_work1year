//реализация рекурсии
#include <iostream>
using namespace std;
void Output(int n)
{
    if(n>1)
        Output(n-1);   //aeyrwbz dspsdftn cfvf ct,z gjrf yt cnfytn yek`v? cfvsq ghjcnjq rjl
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
