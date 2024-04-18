#include<bits/stdc++.h>
using namespace std;


void factorial(int i,int product){
    if(i==1){
        cout<<"Factorial: "<<product;
        return;
    }
    factorial(i-1,product*i);
}
int main()
{
    factorial(6,1);
 return 0;
}