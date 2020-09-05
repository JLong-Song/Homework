#include<iostream>
#include<string>
#include <iomanip>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.get();
    cin.get();
    while(n--){
        map<string, int> tree;
        string T;
        int a = 0;
        while(getline(cin, T)){
            if(!T.compare("")) break;
            tree[T]++;
            a++;
        }
        for(map<string, int>::iterator i = tree.begin(); i != tree.end(); i++){
            cout << i->first << " " << fixed << setprecision(4) << i->second * 100.0 / a << endl;
        }
        if(n) cout << endl;
    }
    return 0;
}
