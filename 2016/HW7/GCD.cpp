#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    while(true){
        cin >> a;
        if(!a) break;
        cin >> b;

        if(a > b){
            for(c = 1; c != 0; a = b, b = c){
                c = a % b;
            }
            cout << a << endl;
        }
        if(a < b){
            for(c = 1; c != 0; b = a, a = c){
                c = b % a;
            }
            cout<< b <<endl;
        }
    }

    return 0;
}
