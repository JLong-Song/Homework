#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i, j, q, m, n, k, temp, ntemp;
    char a[31][31], word[31];
    cin >> m >> n >> k;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    while(k--){
        cin >> word;
        for(i = 0, ntemp = 0; i < m; i++){
            for(j = 0, q = 0, temp = 0; j < n; j++){
                if(word[q] == a[i][j]){
                    temp++;
                    q++;
                }
            }
            if(temp == strlen(word)){
                cout << "found\n";
                break;
            }
            else ntemp++;
        }
        if(ntemp == m){
            for(j = 0, q = 0, ntemp = 0; j < n; j++){
                for(i = 0, temp = 0; i < m; i++){
                    if(word[q] == a[i][j]){
                        temp++;
                        q++;
                    }
                }
                if(temp == strlen(word)){
                    cout << "found\n";
                    break;
                }
                else ntemp++;
                if(ntemp == n) cout << "not found\n";
            }
        }
        word[0] = '\0';
    }
}
