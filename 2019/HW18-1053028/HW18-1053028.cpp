#include<iostream>
#include<string>
using namespace std;
struct point{
    string a;
    int x, y;
};
int main(){
    point p[50];
    int X, Y, i, j, k, num, num2;
    double N, z = 1;
    string s;
    cin >> N;
    while(N--){
        string ans[100][100];
        cin >> s;
        X = 0, Y = 0;
        for(i = 0; i <s.size(); i++, X++){
            p[i].x = X;
            p[i].y = Y;
            switch(s[i]){
                case 'R':
                    p[i].a = '/';
                    if(s[i + 1] != 'F') Y++;
                    break;
                case 'C':
                    p[i].a = '_';
                    if(s[i + 1] == 'F') Y--;
                    break;
                case 'F':
                    p[i].a = '\\';
                    if(s[i + 1] == 'F') Y--;
            }
        }
        for(i = 0, num = 0, num2 = 0; i < s.size(); i++){
            if(p[i].y < num) num = p[i].y;
            if(p[i].y > num2) num2 = p[i].y;
        }
        int l = num2 - num;
        for(i = 0; i < s.size(); i++){
            p[i].y -= num;
            p[i].y = l - p[i].y;
        }
        for(i = 0; i < s.size(); i++){
            int g = p[i].x;
            int h = p[i].y;
            ans[h][g] = p[i].a;
        }
        for(i = 0; i <= l; i++){
            for(j = s.size(); j >= 0; j--){
                if(!ans[i][j].empty()){
                    for(k = j; k >= 0; k--)
                        if(ans[i][k].empty()) ans[i][k] = " ";
                }
            }
        }
        cout << "Case #" << z << ":\n";
        z++;
        for(i = 0; i <= l; i++){
            cout << "| ";
            for(j = 0; j < s.size(); j++){
                cout << ans[i][j];
            }
            cout << endl;
        }
        cout << "+-";
        for(i = 0; i <= s.size(); i++)
            cout << "-";

        cout << endl << endl;
    }
}
