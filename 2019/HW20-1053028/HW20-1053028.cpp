#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int a, b, c, correct = 0;
    char x, y;
    string s;
    stringstream ss;
    while(getline(cin, s)){
        if(s.size() == 0) break;
        ss.str(s);
        ss >> a;
        ss >> x;
        ss >> b;
        ss >> y;
        ss >> c;
        if(x == '+')
            if(a + b == c) correct++;
        else
            if(a - b == c) correct++;
        s.clear();
        ss.clear();
    }
    cout << correct << endl;
}
