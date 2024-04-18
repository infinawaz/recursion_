// using multiple recursive calls

#include<bits/stdc++.h>
using namespace std;

long long int fib(long long int n){
    if(n<=1) return n;
    // return fib(n-1) + fib(n-2);

    long long int last = fib(n-1);
    long long int slast = fib(n-2);
    return last + slast;
}

int main()
{
    cout<<fib(50);
 return 0;
}

// outputs:
//50 -> 12586269025
//49 -> 7778742049
//48 -> 4807526976
//47 -> 2971215073
//46 -> 1836311903
//45 -> 1134903170
//44 -> 701408733
//43 -> 433494437
//42 -> 267914296
//41 -> 165580141
//40 -> 102334155
