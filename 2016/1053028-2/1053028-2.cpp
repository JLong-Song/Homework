#include<iostream>
using namespace std;
int main(){
    int N, a1, a2, a3, coin1 = 0, coin5 = 0, coin50 = 0;
    while(cin >> N){
        if(N == -1) break;
        cin >> a1 >> a2 >> a3;
        if(a1 * 15 + a2 * 20 + a3 * 30 <= N)        {
            N -= (a1 * 15 + a2 * 20 + a3 * 30);
            coin50 = N / 50;
            coin5 = (N % 50) / 5;
            cout << coin1 << "," << coin5 << "," << coin50 << endl;
        }
        else cout << "\"0\"" << endl;
    }
    return 0;
}
