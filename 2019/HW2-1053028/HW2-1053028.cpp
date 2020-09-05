#include<iostream>
using namespace std;
int main(){
    int i, j, Number_of_integer, Exchange_times, sum, num[1000];
    while(cin >> Number_of_integer){
        Exchange_times = Number_of_integer;
        for(i = 0 ; i < Number_of_integer ; i++)
            cin >> num[i];
        sum = 0;

        /*Get the exchange*/
        while(Exchange_times--){
            for(i = 0; i < Number_of_integer - 1; i++){
                if(num[i] > num[i + 1]){
                    swap(num[i], num[i + 1]);
                    sum++;
                }
            }
        }

        cout << "Minimum exchange operations : " << sum << endl;
    }
}
