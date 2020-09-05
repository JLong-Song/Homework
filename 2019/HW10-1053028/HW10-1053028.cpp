#include<iostream>
using namespace std;
int main(){
    double H, U, D, F;
    while(cin >> H){
        cin >> U >> D >> F;

        if(!H) break;
        double day = 0, T = 0, d = (F / 100) * U;

        while(T >= 0 && T < H){
            day++;
            T += U;
            if(T > H) break;
            T -= D;
            if(T < 0) break;
            U -= d;
            if(U < 0) U = 0;
        }
        if(T >= H) cout << "success on day " << day << endl;
        if(T < 0) cout << "failure on day " << day << endl;
    }
    return 0;
}
/*
6 3 1 10
10 2 1 50
50 5 3 14
50 6 4 1
50 6 3 1
1 1 1 1
0 0 0 0
*/

/*
success on day 3
failure on day 4
failure on day 7
failure on day 68
success on day 20
failure on day 2
*/
