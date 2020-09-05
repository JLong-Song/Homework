#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N, i, j, t = 0, h;
    char sum[5001];
    cin >> N;
    while(N--){
        cin >> sum;
        h = strlen(sum);
        for(i = 0, j = h - 1; i < h && j >= 0; i++, j--){
            if(sum[i] == sum[j])
                t++;
        }
        if(t == h)
            cout << "YES\n";
        else
            cout << "NO\n";
        t = 0;
    }

    return 0;
}
