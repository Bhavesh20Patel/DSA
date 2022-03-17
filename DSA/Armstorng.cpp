#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    
    int sum=0;
    int original_n = n;
    while (n>0)
    {
        int last_digit = n%10;
        sum += pow(last_digit,3);
        n=n/10;
    }
    if (sum == original_n)
    {
        cout<<"Your given no. is Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
} 