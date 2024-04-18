#include<bits/stdc++.h>
using namespace std;

void fib(int i,int j, int n){
    static int sum = i+j;
    if(i>n) return;
    cout<<sum<<" ";
    fib(j,sum,n);
}

int main()
{
    fib(0,1,10);

 return 0;
}