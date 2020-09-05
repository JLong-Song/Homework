#include<iostream>
#include<string>
using namespace std;
int main(){
    int i, num;
    string code;
    while(getline(cin, code)){
        if(code[0] == '_') continue;
        num = 0;
        for(i = 0; i < code.size(); i++){
            if(code[i] == ' ') num *= 2;
            else if(code[i] == 'o') num = num * 2 + 1;
        }
        cout << char(num);
    }
}
/*
___________
| o   .  o|
|  o  .   |
| ooo .  o|
| ooo .o o|
| oo o.  o|
| oo  . oo|
| oo o. oo|
|  o  .   |
| oo  . o |
| ooo . o |
| oo o.ooo|
| ooo .ooo|
| oo o.oo |
|  o  .   |
| oo  .oo |
| oo o.ooo|
| oooo.   |
|  o  .   |
| oo o. o |
| ooo .o o|
| oo o.o o|
| ooo .   |
| ooo . oo|
|  o  .   |
| oo o.ooo|
| ooo .oo |
| oo  .o o|
| ooo . o |
|  o  .   |
| ooo .o  |
| oo o.   |
| oo  .o o|
|  o  .   |
| oo o.o  |
| oo  .  o|
| oooo. o |
| oooo.  o|
|  o  .   |
| oo  .o  |
| oo o.ooo|
| oo  .ooo|
|  o o.oo |
|    o. o |
___________
*/
