#include<iostream>
using namespace std;

int main(){
    int N, n, i, j, temp = 0;
    int s[10000], e[10000], a[10000];
    cin >> N;

    while(N--){
        while(cin >> n){
            int s[10000] = {0}, e[10000] = {0}, a[10000] = {0};

            for(i = 0; i < n; i++){
                cin >> s[i] >> e[i];
            }
            for(i = 0; i < n; i++){
                for(j = s[i]; j < e[i]; j++){
                    a[j] = 1;
                }
            }
            for(i = 0; i < 10000; i++){
                temp += a[i];
            }
            cout << temp << endl;
            temp = 0;
            n--;
        }
    }

    return 0;
}
