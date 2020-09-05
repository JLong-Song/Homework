#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    while(true){
        cin >> n;
        if(!n) break;
        for(a = 0; n != 0;n /= 10){
            b = n % 10;
            a = a + b;
        }
        cout << a << endl;
    }

    return 0;
}
