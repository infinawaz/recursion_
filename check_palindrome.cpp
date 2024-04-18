//check if a number is a palindrome or not

#include<bits/stdc++.h>
using namespace std;

void palindrome(int num,int res,int temp){
    cout<<num<<" "<<res<<"  "<<endl;
    if(num==0)
    {
        if(temp==res) cout<<"Number is a palindrome";
        else cout<<"Not a palindrome";
        return;
    }
        
    
    int rem=num%10;
    palindrome(num/10,res*10+rem,temp);
}

int main()
{
    int num= 112343211;
    int temp=num;
    int res=0;
    palindrome(num,res,temp);

 return 0;
}