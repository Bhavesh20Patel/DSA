#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int maxNo = -19999999;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        maxNo = max(maxNo, arr[i]);
            cout<<maxNo<<" "<<endl;
             }
    return 0;
}