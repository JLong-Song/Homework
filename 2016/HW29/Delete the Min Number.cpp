#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N, b, i, j;
    char num[81];
    cin >> N;
    while(N--){
        cin >> num >> b;
        while(b--){
            for(i = 0; i < strlen(num); i++){
                if(num[i] > num[i + 1]){
                    for(j = i; j < strlen(num); j++){
                        num[j] = num[j + 1];
                    }
                    break;
                }
            }
        }
        while(num[0] == '0'){
            for(i = 0; i < strlen(num); i++){
                num[i] = num[i + 1];
            }
        }
        if(!strlen(num)) cout << '0\n';
        else cout << num << endl;
    }

    return 0;
}
