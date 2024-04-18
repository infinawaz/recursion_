//check if an array is a palindrome or not

#include <iostream>
using namespace std;

bool f(int i, int n, int arr[]) {
    if (i >= n / 2) return true;

    // if (arr[i] == arr[n - i - 1]) {
    //     bool x = f(i + 1, n, arr);
    //     if (x) return true;
    // }   

    // return false;

    if(arr[i]!=arr[n-i-1]) return false;

    return f(i + 1, n, arr);

}

int main() {
    int arr[] = {0,1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1};
    if(f(0, 12, arr)) cout<<"Palindrome";
    else cout<<"Not a palindrome";

    return 0;
}
