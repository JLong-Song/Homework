#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c, n;
    double s, x1, x2;
    cin >> a >> b >> c >> n;

    //show the precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(n);

    s = sqrt(b * b - 4 * a * c);
    x1 = (-1 * b + s) / (2 * a);
    x2 = (-1 * b - s) / (2 * a);

    if(x1 > x2)
        cout << x1 << " " << x2 << endl;
    else
        cout << x2 << " " << x1 << endl;

    return 0;
}
