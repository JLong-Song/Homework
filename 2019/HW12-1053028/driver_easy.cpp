#include <iostream>
#include "HW12-1053028.h"
using namespace std;
int main(){
    Point p1, p2(69, 76), p3(4, 98), p4;
    cin >> p4;
    Triangle t(p1, p2, p3);
    Quadrilateral s(p1, p2, p3, p4);
    cout << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
    cout << t.area() << endl;
    cout << s.area() << endl;
    p3 = p4;
    cout << p3;
}
