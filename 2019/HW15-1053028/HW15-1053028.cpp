#include<iostream>
#include<string>
using namespace std;
class homework{
public:
    string sub;
    int days;
};
int main(){
    int T, N, D, i, temp, sum, c = 1;
    homework H[100];
    string s;
    cin >> T;
    while(T--){
        cin >> N;
        for(i = 0; i < N; i++)
            cin >> H[i].sub >> H[i].days;
        cin >> D >> s;
        temp = 0;
        for(i = 0; i < N; i++)
            if(s == H[i].sub){
                temp = 1;
                sum = i;
            }
        if(temp == 1){
            if((H[sum].days - D) <= 0)
                cout << "Case " << c << ": Yesss\n";

            else if((H[sum].days - D) <= 5)
                cout << "Case " << c << ": Late\n";

            else cout << "Case " << c << ": Do your own homework!\n";
        }
        if(!temp) cout << "Case " << c << ": Do your own homework!\n";
        c++;
    }
}
