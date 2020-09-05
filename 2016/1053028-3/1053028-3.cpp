#include<iostream>
using namespace std;
int main(){
    unsigned long long M, m, N, n;
    while(cin >> N){
        if(N == -1) break;
        for(M = 1, n = 2; n <= N; n++)
            M = M * n;

        for(M, m = 0; M > 0; M /= 10)
            if(!M % 10)
                m++;

        cout << m << endl;
    }
    return 0;
}
