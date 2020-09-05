#include<iostream>
using namespace std;
int main(){
    int N, n, m, L, i, j, x, y, num = 0;

    cin >> N;
    while(N--){
        cin >> n >> m >> L;
        int seat[20][20] = {0};
        for(i = 1; i <= L; i++){
            cin >> x >> y;
            seat[x - 1][y - 1] = 1;
            seat[x - 2][y - 1] = 1;
            seat[x][y - 1] = 1;
            seat[x - 1][y - 2] = 1;
            seat[x - 1][y] = 1;
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(seat[i][j] == 1)
                    num++;
            }
        }
        if(num == n * m) cout << "Y" << endl;
        else cout << "N" << endl;
        num = 0;
    }

    return 0;
}
