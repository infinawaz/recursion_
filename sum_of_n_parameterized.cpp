//parameterized way -> parameter will do the work

#include<bits/stdc++.h>
using namespace std;

void f(int i,int sum){
    if(i==0){
        cout<<"Sum: "<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

int main()
{
    f(3,0);

 return 0;
}