#include<iostream>
using namespace std;

int main(){
    int Original_num, Every_num, Next_original_num, ori[10], num, large_num, small_num;
    int i, j;
    while(cin >> Original_num){
        if(!Original_num) break;
        Next_original_num = 0;
        int sum = 1;
        cout << "Original number is " << Original_num << endl;
        while(1){
            Every_num = Original_num;

            /*Store every integer*/
            for(i = 0; Every_num > 0; i++, Every_num /= 10){
                ori[i] = Every_num % 10;
                num = i;
            }

            /*Sorting*/
            for(i = 0; i < num; i++)
                for(j = i + 1; j <= num; j++)
                    if(ori[i] < ori[j]) swap(ori[i], ori[j]);

            /*The largest combination*/
            for(i = 0, large_num = 0; i < num + 1; i++)
                large_num = 10 * large_num + ori[i];

            /*The smallest combination*/
            for(i = num, small_num = 0; i >= 0; i--)
                small_num = 10 * small_num + ori[i];

            /*Get the next Original_num*/
            Next_original_num = large_num - small_num;

            cout << large_num << " - " << small_num << " = " << Next_original_num << endl;


            if(Original_num == Next_original_num) break;
            else Original_num = Next_original_num;
            sum++;
        }
        cout << "Chain length " << sum << endl;
        cout << endl;
    }
}
