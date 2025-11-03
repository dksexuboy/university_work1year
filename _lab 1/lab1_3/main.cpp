/*вывод числа с через целое число*/
#include <iostream>
using namespace std;

int main() {
    int x, y, z, r;
    cout << "enter x(19)" << endl;
    cin >> x;
    cout << "enter y(6)" << endl;
    cin >> y;
    cout << "enter z(31)" << endl;
    cin >> z;
    r = (x - y * z) - 3.14159 * (x + y + z / x);
    float xx,yy,zz, rr;
    xx = x*1;
    yy=y*1;
    zz=z*1;
    rr = (xx - yy * zz) - 3.14159 * (xx + yy + zz / xx);
    cout <<"using int "<< "r = (x - y*z) - 3.14159 * (x + y + z / x) =" << r << endl;
    cout <<"using float "<< "r = (x - y*z) - 3.14159 * (x + y + z / x) =" << rr << endl;
    return 0;
}
