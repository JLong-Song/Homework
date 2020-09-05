#include <iostream>
using namespace std;

int main(){
    int pen, apple, pineapple;
    cin >> pen >> apple >> pineapple;

    if(pen >= 2 && apple >= 1 && pineapple >= 1)
        cout << "Pen-Pineapple-Apple-Pen\n";
    else if(pen >= 1 && apple >= 1)
        cout << "Apple-Pen\n";
    else if(pen >= 1 && pineapple >= 1)
        cout << "Pineapple-Pen\n";
    else if(pen >= 1)
        cout << "Pen\n";
    else if(apple >= 1)
        cout << "Apple\n";
    else
        cout << "Pineapple\n";

    return 0;
}
