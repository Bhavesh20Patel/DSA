#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={4,1,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}