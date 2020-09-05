#include <iostream>
using namespace std;
int main(){
    int degree;
    double bill, b;
    cin >> degree;

    if(degree <= 120)
        bill = degree * 1.63;
    else if(degree <= 330)
        bill = (degree - 120) * 2.10 + 120 * 1.63;
    else if(degree <= 500)
        bill = (degree - 330) * 2.89 + 210 * 2.10 + 120 * 1.63;
    else
        bill = (degree - 500) * 3.79 + 170 * 2.89 + 210 * 2.10 + 120 * 1.63;

    cout << int(bill + 0.5) << endl;
    return 0;
}
