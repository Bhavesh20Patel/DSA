#include<iostream>
using namespace std;

int fac(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"Enter the numbers you want the factorial of :"<<endl;
    cin>>n>>r;
    int ans = fac(n)/(fac(r)*fac(n - r));
    cout<<ans;
    return 0;
}