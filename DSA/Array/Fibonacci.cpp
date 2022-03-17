#include<iostream>
using namespace std;

void fibonacci(int n){
     int t0 = 0;
     int t1 = 1;
     int next_term;
     for (int i = 1; i <= n; i++)
     {
         cout<<t0<<endl;
         next_term = t0+t1;
         t0=t1;
         t1=next_term;
     }
     return;
}
int main(){
    int a;
    cin>>a;
    cout<<"Your Fibonacci sequence is:"<<endl;
    fibonacci(a);
    return 0;
}