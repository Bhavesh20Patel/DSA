#include<bits/stdc++.h>
using namespace std;
int decimalTooctal(int n){
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 2;
        x /= 2;
    }
    while (x>0)
    {
        int last_digit = n/x;
        n -= last_digit*x;
        x /= 2;
        ans = ans*10 + last_digit;

    }
   return ans;
}
int main(){
    int n;
    cin>>n;
    cout<< decimalTooctal(n) <<endl;
    return 0;
}