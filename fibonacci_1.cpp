//fibonacci series using single function call

#include<bits/stdc++.h>
using namespace std;

void fib(int i,int j, int n){
    if(!n) return;
    cout<<i<<" ";
    fib(j,i+j,n-1);
}

int main()
{
    fib(0,1,10);

 return 0;
}