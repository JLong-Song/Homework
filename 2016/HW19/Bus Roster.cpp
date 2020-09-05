#include<iostream>
using namespace std;

int main(){
    int N;
    while(cin >> N){
        while(N--){
         int time[1001] = {0};
            while(1){
                int S, T;
                cin >> S >> T;
                if(!S && !T) break;
                for(int i = S; i < T; i++){
                  time[i]++;
                }
            }
            int Bus = 0;
            for(int i = 0; i < 1000; i++){
                if(time[i] > Bus){
                    Bus = time[i];
                }
            }
          cout << Bus << endl;
        }
    }
    return 0;
}
