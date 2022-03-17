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
    int n;
    cout<<"Enter the numbers you want the factorial of :"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<fac(i)/(fac(j)*fac(i - j))<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}