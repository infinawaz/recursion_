//using pointer

#include<bits/stdc++.h>
using namespace std;

void reverse(int l, int r,int *arr){
    if(l>=r) {
        for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    reverse(0,7,arr);


 return 0;
}