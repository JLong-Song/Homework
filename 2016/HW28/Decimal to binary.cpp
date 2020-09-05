#include<iostream>
using namespace std;

int main(){
    int i, j, N, num, temp, arr[100000];
    cin >> N;
    while(N--){
        cin >> num;
        if(!num) cout << 0;
        for(i = 0,temp = 0; num > 0; i++, num /= 2, temp++){
            arr[i] = num % 2;
        }
        for(j = temp - 1; j >= 0; j--){
            cout << arr[j];
        }
        cout << endl;
    }

    return 0;
}
