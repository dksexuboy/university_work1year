#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    float x;
    float y;
};

float calculate(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1, p2, p3, p4, p5,p6,p7,p8,p9,p10;
    cout << "enter x coordinates for point 1 (x y): ";
    cin >> p1.x;
    cout<<"enter y"<<endl;
    cin>> p1.y;

    cout << "enter x coordinates for point 2 (x y): ";
    cin >> p2.x;
    cout<<"enter y"<<endl;
    cin>> p2.y;
    float distance1 = calculate(p1, p2);

    cout << "enter coordinates for point 3 (x y): ";
    cin >> p3.x;
    cout<<"enter y"<<endl;
    cin>> p3.y;

    cout << "enter coordinates for point 4 (x y): ";
    cin >> p4.x;
    cout<<"enter y"<<endl;
    cin>> p4.y;
    float distance2 = calculate(p3, p4);

    cout << "enter coordinates for point 5 (x y): ";
    cin >> p5.x;
    cout<<"enter y"<<endl;
    cin>> p5.y;

    cout << "enter coordinates for point 6 (x y): ";
    cin >> p6.x;
    cout<<"enter y"<<endl;
    cin>> p6.y;
    float distance3 = calculate(p5, p6);

    cout << "enter coordinates for point 7 (x y): ";
    cin >> p7.x;
    cout<<"enter y"<<endl;
    cin>> p7.y;

    cout << "enter coordinates for point 8 (x y): ";
    cin >> p8.x;
    cout<<"enter y"<<endl;
    cin>> p8.y;
    float distance4 = calculate(p7, p8);

    cout << "enter coordinates for point 9 (x y): ";
    cin >> p9.x;
    cout<<"enter y"<<endl;
    cin>> p9.y;

    cout << "enter coordinates for point 10 (x y): ";
    cin >> p10.x;
    cout<<"enter y"<<endl;
    cin>> p10.y;
    float distance5 = calculate(p9, p10);

    float array[5] = {distance1, distance2, distance3, distance4, distance5};


    for(int j = 0; j < 5 - 1; j++) {
      for(int i = 0; i < 5 - j - 1; i++) {
    if(array[i] > array[i + 1]) {
    int tmp = array[i];
                    array[i] = array[i+1];
                    array[i + 1] = tmp;
}
       }
   }
    cout<<"Result"<<endl;
       for(int i = 0; i < 5; i++) {
           cout<<array[i]<<endl; }
    return 0;
}
