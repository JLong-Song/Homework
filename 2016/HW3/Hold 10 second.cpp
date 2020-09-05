#include<iostream>
using namespace std;

int main(){
    int n;
    double sec;
    cin >> n;

    if(!20%n)
        cout << (double)(20 / n) << endl;
    else
        cout << (double)(20 / n) + 1 << endl;

    return 0;
}
