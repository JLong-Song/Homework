#include<iostream>
using namespace std;
int main(){
    int N, n, m, i, j;
    char arr[101][101];
    cin >> N;
    while(N){
        cin >> n >> m;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(arr[i][j] == '1'){
                    if((arr[i-1][j] == '0') || (arr[i + 1][j] == '0') || (arr[i][j - 1] == '0') ||(arr[i][j + 1] == '0'))
                        arr[i][j] = 'a';
                    else if(!i || i == n - 1 || !j || j == m - 1)
                        arr[i][j] = 'a';
                }
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(arr[i][j] == 'a')
                    arr[i][j] = '0';
                else arr[i][j] = '_';
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0;j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        N--;
        if(N) cout << endl;
    }

    return 0;
}
