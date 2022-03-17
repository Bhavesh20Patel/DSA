#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int r_start=0, r_end=n-1, c_start=0, c_end=m-1;
    while (r_start<=r_end && c_start<=c_end)
    {
        for (int col = c_start; col <= c_end; col++)
        {
            cout<<arr[r_start][col]<<" ";
        } 
        r_start++;
        cout<<endl;

        for (int row = r_start; row <= r_end; row++)
        {
            cout<<arr[row][c_end]<<" ";
        }
        c_end--;
        cout<<endl; 

        for (int col = c_end; col >= c_start; col--)
        {
        cout<<arr[r_end][col]<<" ";
        }
        r_end--;
        cout<<endl;

        for (int row = r_end; row >= r_start; row--)
        {
            cout<<arr[row][c_start]<<" ";
        }
        c_start++;
    } 
    return 0;
}