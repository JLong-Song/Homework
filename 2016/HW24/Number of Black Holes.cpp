#include<iostream>
using namespace std;
int fun(long long);
int main(){
    int k, i, j, a, temp;
    int num[18];
    long long sum, big = 0, small = 0;
    cin >> k;
    while(k--){
        cin >> sum;
        temp = fun(sum);
        for(i = 0; i < temp; i++){
            num[i] = sum % 10;
            sum /= 10;
        }
        for(i = 0; i < temp; i++){
            for(j = i + 1; j < temp; j++){
                if(num[i] < num[j]){
                    a = num[j];
                    num[j] = num[i];
                    num[i] = a;
                }
            }
        }
        for(i = 0; i < temp; i++){
            big = 10 * big + num[i];
        }
        for(i = temp - 1; i >= 0; i--){
            small = 10 * small + num[i];
        }
        cout << big - small << endl;
        big = 0;
        small = 0;
    }
    return 0;
}
int fun(long long sum){
    if(sum < 10) return 1;
    else return fun(1) + fun(sum / 10);
}
