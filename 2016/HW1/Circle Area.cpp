#include <iostream>
using namespace std;

int main(){
    int r;
    double area;
    cout << "radius: ";
    cin >> r;

    area = (double)r * (double)r * 3.14159;

    //show the precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << area << endl;

    return 0;
}
