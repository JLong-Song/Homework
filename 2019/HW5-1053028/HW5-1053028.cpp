#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct password{
    char p[11];
};
int main(){
    password temp[10];
    int i, j, k, l, sum;
    double num = 1;
    while(cin >> temp[0].p){
        bool check = true;
        if(temp[0].p[0] == '9' || (temp[0].p[0] != '0' && temp[0].p[0] != '1')) return 0;
        for(i = 1; i < 10; i++){
            cin >> temp[i].p;
            if(temp[i].p[0] == '9'){
                sum = i;
                break;
            }
        }
        for(i = 0; i < sum - 1; i++)
            for(j = i + 1; j < sum; j++)
                if(strlen(temp[i].p) > strlen(temp[j].p)) swap(temp[i], temp[j]);

        for(i = 0; i < sum - 1; i++){
            for(j = i + 1; j < sum; j++){
                for(k = 0 , l = 0; k < strlen(temp[i].p); k++){
                    if(temp[i].p[k] == temp[j].p[k]) l++;
                    if(l == strlen(temp[i].p)){
                        check = false;
                        break;
                    }
                }
            }
        }
        if(check) cout << "Set " << num << " is immediately decodable\n";
        else cout << "Set " << num << " is not immediately decodable\n";
        num++;
    }
}
