#include<iostream>
#include<cstring>
using namespace std;
char L[10][8] = {"YYYYYYN",
                 "NYYNNNN",
                 "YYNYYNY",
                 "YYYYNNY",
                 "NYYNNYY",
                 "YNYYNYY",
                 "YNYYYYY",
                 "YYYNNNN",
                 "YYYYYYY",
                 "YYYYNYY"};
int main(){
    char test[11][8];
    int N, i, j, k;
    while(cin >> N){
        if(!N) break;
        for(i = 0; i < N; i++){
            cin >> test[i];
        }
        bool a = false;
        for(i = 9; i >= N - 1; i--){
            bool sum[7] = {false};
            for(j = 0; j < N; j++){
                for(k = 0; k < 7; k++){
                    if(sum[k] && test[j][k] == 'Y') break;
                    if(test[j][k] == 'N' && L[i - j][k] == 'Y') sum[k] = true;
                    else if(test[j][k] == 'Y' && L[i - j][k] == 'N') break;
                }
                if(k != 7) break;
            }
            if(j == N){
                a = true;
                break;
            }
        }
        if(a) cout << "MATCH\n";
        else cout << "MISMATCH\n";
    }
}
