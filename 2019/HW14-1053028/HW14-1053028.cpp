#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int X, i, j, n, temp;
    long long A[200000], B[200000];
    string N;
    stringstream ss;
    while(cin >> X){
        cin.get();
        getline(cin, N);
        ss.clear();
        ss.str(N);
        i = 0;
        while(ss >> n){
            if(ss.fail()) break;
            A[i] = n;
            i++;
            temp = i;
        }
        long long sum = 0, a = 1;
        for(i = temp - 2, j = 1; i >= 0; i--, j++){
            sum += j * A[i] * a;
            a *= X;
        }
        cout << sum << endl;
    }
}
/*
7
1 -1
*/
