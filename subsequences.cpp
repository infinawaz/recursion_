#include<bits/stdc++.h>
using namespace std;

void f(int i,vector<int> &ds, int arr[],int n){
    if(i == n){
        for(auto x : ds)
            cout<< x <<" ";
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[i]);
    f(i+1, ds, arr, n);
    ds.pop_back();

    //not pick, or not take condition, this element is not added to the subsequence
    f(i+1, ds, arr, n);
}
int main()
{
    int arr[] = {3,1,2,8};
    int n = 4;
    vector<int> ds;
    f(0, ds, arr, n);

    return 0;

 return 0;
}