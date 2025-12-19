int power(int a, int n){
    if(n == 0) return 1;
    int half = power(a, n / 2);
    if(n % 2 == 0)
        return half * half;
    else
        return a * half * half;
}
