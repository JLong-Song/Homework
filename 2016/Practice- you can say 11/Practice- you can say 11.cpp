#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char NUM[1001];
    int num[1000], i, a = 0, b = 0, temp = 0;
    while(1)    {
        cin >> NUM;
        for(i = 0; i < strlen(NUM); i++){
            if(NUM[i] == '0'){
                num[i] = 0;
                temp++;
            }
            num[i] = NUM[i] - '0';
        }
        for(i = 0, a = 0; i < strlen(NUM); i += 2){
            a += num[i];
        }
        for(i = 1, b = 0; i < strlen(NUM) ; i+=2){
            b += num[i];
        }
        if(temp == strlen(NUM)) break;
        if(!(a-b)%11) cout << NUM << " is a multiple of 11.\n";
        else cout << NUM << " is not a multiple of 11.\n";
        temp = 0;
    }
}
