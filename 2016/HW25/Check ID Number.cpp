#include<iostream>
using namespace std;
int main(){
    char p[11];
    int num[10] = {0}, i, temp;
    cin >> p;
    for(i = 0; i < 11; i++){
        switch(p[i]){
            case 'A':
                num[i] = 10;
                break;
            case 'B':
                num[i] = 11;
                break;
            case 'C':
                num[i] = 12;
                break;
            case 'D':
                num[i] = 13;
                break;
            case 'E':
                num[i] = 14;
                break;
            case 'F':
                num[i] = 15;
                break;
            case 'G':
                num[i] = 16;
                break;
            case 'H':
                num[i] = 17;
                break;
            case 'I':
                num[i] = 34;
                break;
            case 'J':
                num[i] = 18;
                break;
            case 'K':
                num[i] = 19;
                break;
            case 'L':
                num[i] = 20;
                break;
            case 'M':
                num[i] = 21;
                break;
            case 'N':
                num[i] = 22;
                break;
            case 'O':
                num[i] = 35;
                break;
            case 'P':
                num[i] = 23;
                break;
            case 'Q':
                num[i] = 24;
                break;
            case 'R':
                num[i] = 25;
                break;
            case 'S':
                num[i] = 26;
                break;
            case 'T':
                num[i] = 27;
                break;
            case 'U':
                num[i] = 28;
                break;
            case 'V':
                num[i] = 29;
                break;
            case 'W':
                num[i] = 32;
                break;
            case 'X':
                num[i] = 30;
                break;
            case 'Y':
                num[i] = 31;
                break;
            case 'Z':
                num[i] = 33;
                break;
            default:
                num[i] = p[i] - '0';
                break;
        }
    }
    temp=(num[0] / 10) + (num[0] % 10) * 9 + num[1] * 8 + num[2] * 7 + num[3] * 6 + num[4] * 5 + num[5] * 4 + num[6] * 3 + num[7] * 2 + num[8] + num[9];
    if(!temp%10)
        cout << "CORRECT!!!\n";
    else
        cout << "WRONG!!!\n";

    return 0;
}
