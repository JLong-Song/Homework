#include <iostream>
using namespace std;

int main(){
    unsigned long long i, j, x, z, counts = 1, T;
    while(cin >> i){
        if(!i) break;
        cin >> j;
        T = 1;

        if(i < j){
            for(x = i; x <= j; x++){
                z = x;
                while(z != 1){
                    if(!z%2)
                        z = 3 * z + 1;
                    else
                        z /= 2;
                    T++;
                }

                if(counts < T)
                    counts = T;
                    T = 1;
            }
        }else{
            for(x = j; x <= i; x++){
                z = x;
                while(z != 1){
                    if(z%2)
                        z = 3 * z + 1;
                    else
                        z /= 2;
                    T++;
                }

                if(counts < T)
                    counts = T;
                    T = 1;
            }
        }
        cout << i << " " << j << " " << counts << endl;
        counts = 1;
    }

    return 0;
}
