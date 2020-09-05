#include<iostream>
#include"1053028-13.h"
using namespace std;
int count_profit(int year);

int main(){
    int n;
    while(cin >> n)
        cout << count_profit(n) << endl;

    return 0;
}
