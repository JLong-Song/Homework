int Sum_of_prime(int a, int b){
    int x, y, A = 0;
    for(x = a; x <= b; x++){
        for(y = 2; y <= x; y++){
            if(x == y || x % y){
                A += x;
                break;
            }
        }
    }
    return A;
}
int Num_of_composite(int a, int b){
    int z, w, B = 0;
    for(z = a; z <= b; z++){
        for(w = 2; w <= z; w++){
            if(z != w && !z%w){
                B++;
                break;
            }
        }
    }
    return B;
}
void Output(int n1, int n2)
{
    std::cout << n1 << " " << n2 << "\n";
}
