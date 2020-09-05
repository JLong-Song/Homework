#include<iostream>
#include<string>
using namespace std;
int main(){
    string t;
    while(getline(cin, t)){
        if(t.size() >= 4){
            for(int i = 0; i < t.size() - 4; i++){
                if(t[i] == ' ') i++;
                if(t[i-1] == ' ' || (t[i-1] > 90 && t[i - 1] < 97) || t[i - 1] > 122 || t[i - 1] < 65)
                    if(t[i + 4] == ' ' || (t[i + 4] > 90 && t[i + 4] < 97) || t[i + 4] > 122 || t[i + 4] < 65)
                        if((t[i + 3] >= 65 && t[i + 3] <= 90) || (t[i + 3] >= 97 && t[i + 3] <= 122))
                            if((t[i + 2] >= 65 && t[i + 2] <= 90 ) || (t[i + 2] >= 97 && t[i + 2] <= 122))
                                if((t[i + 1] >= 65 && t[i + 1] <= 90) || (t[i + 1] >= 97 && t[i + 1] <= 122))
                                    if(t[i] >= 65 && t[i] <= 90) t[i] = 'L';
                                    else t[i] = 'l';
                                    t[i + 1] = 'o';
                                    t[i + 2] = 'v';
                                    t[i + 3] = 'e';
            }
        }
        cout << t << endl;
    }
}
