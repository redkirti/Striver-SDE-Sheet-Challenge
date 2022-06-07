#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    if(n==1)
        return x%m;
    if(n%2==0){
        long long i = modularExponentiation(x%m,n/2,m);
        return (i*i)%m;
    }
    else{
        long long j = modularExponentiation(x%m,(n-1)/2, m);
        return (x * ((j*j)%m))%m;    
    }
}