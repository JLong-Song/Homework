void Get_Input(int& n){
    cin >> n;
}
double Max_Product(int n){
    int a, b, m, A = 1, sum = 0, B = 1, num = 0;
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(n == 3) return 3;
    else{
        a = n / 3;
        if((n % 3) % 2){
            a -= 1;
            b = (n - (a * 3)) / 2;
        }
        else b = (n - a * 3) / 2;
        for(; sum < a; sum++){
            A *= 3;
        }
        for(;num < b; num++){
            B *= 2;
        }
        return A * B;
    }
}
void output(int n){
    cout << n << endl;
}
