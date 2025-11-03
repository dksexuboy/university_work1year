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
    Point p1, p2;

    cout << "enter coordinates for point 1 (x y): ";
    cin >> p1.x >> p1.y;

    cout << "enter coordinates for point 2 (x y): ";
    cin >> p2.x >> p2.y;
    float distance = calculate(p1, p2);

    cout << "distance : " << distance << endl;

    return 0;
}
