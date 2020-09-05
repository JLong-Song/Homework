#include<iostream>
#include<cstring>
using namespace std;
double cal(char, int);
double cal(char question[], int j){
    double n = 0;

    while(double(question[j]) >= 48 && double(question[j]) <= 57){
        n *= 10;
        n += double(question[j]) - 48;
        j++;
    }

    if(question[j] == '.'){
        int b = 10;
        j++;
        while(double(question[j]) >= 48 && double(question[j]) <= 57){
            n += (double(question[j]) - 48) / b;
            j++;
            b *= 10;
        }
    }

    if(question[j] == 'm') n /= 1000;
    else if(question[j] == 'k') n *= 1000;
    else if(question[j] == 'M') n *= 1000000;

    return n;
}
int main(){
    int N, i, num = 1;
    double P, U, I;
    char question[1000];
    cin >> N;
    cin.get();

    while(N--){
        for(i = 0; i < 1000; i++)
            question[i] = '\0';

        P = 0 , U = 0 , I = 0;
        cin.getline(question, 1000);

        for(i = 0; i < strlen(question); i++){
            if(question[i] == '='){
                switch(question[i - 1]){
                    case 'P':
                        P = cal(question, i + 1);
                        break;
                    case 'U':
                        U = cal(question, i + 1);
                        break;
                    case 'I':
                        I = cal(question, i + 1);
                        break;
                }
            }
        }

        cout << "Problem #" << num << endl;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        if(P && U) cout << "I=" << P / U << "A\n";
        else if(P && I) cout << "U=" << P / I << "V\n";
        else cout << "P=" << U * I << "W\n";
        cout << endl;
        num++;
    }
}
