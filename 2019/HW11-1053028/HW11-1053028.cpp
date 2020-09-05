#include<iostream>
#include<cmath>
using namespace std;
int main(){
    unsigned long long i, n, k;
    while(cin >> n){
        long double s = 0;
        cin >> k;
        for(i = n - k + 1; i <= n; i++)
            s += log10(i);

        for(i = 1; i <= k; i++)
            s -= log10(i);

        cout << int(s) + 1 << endl;
    }
}
