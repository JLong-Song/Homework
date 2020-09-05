int Is_CubeNumber(int N){
    int n;
    for(n = 1; n <= N; n++){
        if(n * n * n == N)
            return 1;
    }
    return 0;
}
