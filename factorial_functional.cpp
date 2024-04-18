#include<bits/stdc++.h>
using namespace std;

int factorial(int i){
    if(i==1) return 1;
    return i * factorial(i-1);
}

int main()
{
    cout<<"Factorial: "<<factorial(6);

 return 0;
}