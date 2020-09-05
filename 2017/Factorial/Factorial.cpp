#include <iostream>
using namespace std;
double answer(int num){
    if(num == 0 || num == 1) return 1;
    else return num * answer(num - 1);
}
int main(){
    double num;
    cout << "Input any number: ";
    cin >> num;
    cout << answer(num) << endl;
}

