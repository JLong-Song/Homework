int LegalTriangle(int a, int b, int c){
    int ans;
    if((a + b > c) && (a + c > b) && (b + c > a))
        ans = 1;
    else
        ans = 0;
    return ans;
}
