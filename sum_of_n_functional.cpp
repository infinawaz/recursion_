#include<bits/stdc++.h>
using namespace std;

int f(int i){
    if(i==0){
        return 0;
    }
    return i+f(i-1);
}

int main()
{
    cout<<"Sum: "<<f(3);

 return 0;
}