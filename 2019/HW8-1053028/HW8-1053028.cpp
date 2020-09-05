#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    int n;
    string password;
    while(cin >> n){
        cin.get();
        getline(cin, password);
        map<string, int> code;
        string c;
        for(int i = 0; i <= password.size() - n; i++){
            c = password.substr(i, n);
            code[c]++;
        }
        int a = 0;
        for(map<string, int>::iterator i = code.begin(); i != code.end(); i++){
            if(i->second > a){
                a = i->second;
                password = i->first;
            }
        }
        cout << password << endl;
    }
}
