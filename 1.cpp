#include<bits/stdc++.h>
using namespace std;




int f(){
    int static count = 5;
    int static sum = 0;
    sum+=count;

    if(!count) return 0;
    
    cout<<count<<" ";
    count--;
  

    f();
    return sum;
}


int main()
{
   cout<<"Sum: "<< f();

 return 0;
}