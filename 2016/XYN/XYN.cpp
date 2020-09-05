#include<iostream>
using namespace std;

int main(){
    int X, Y, N;
    while(cin >> X && X){
        cin >> Y >> N;
        X %= N;
        int i, num;
        for(i = 1, num = X; i < Y; i++){
            num *= X;
        }
        num %= N;
        cout << num << endl;
    }

    return 0;
}
