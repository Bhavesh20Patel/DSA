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
    int a;
    cout<<"Enter the number you want the factorial of :"<<endl;
    cin>>a;
    int ans = fac(a);
    cout<<ans;
    return 0;
}