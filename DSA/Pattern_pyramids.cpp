//         HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;   
//     } 
//     return 0; 
// }
//         INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;   
//     } 
//     return 0; 
// }
//        HALF PYRAMID AFTER 180 DEGREE ROTATION
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n-i ; j++)      //OR   for(int j=1; j<=n; j++){
//         {                                   //     if(j<=n-i)
//             cout<<" ";                      //          cout<<" ";
//         }                                   //      else
//         for (int j = 1; j <= i; j++)        //          cout<<"*";
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;   
//     } 
//     return 0; 
// }

//         HALF PYRAMID USING NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;   
//     } 
//     return 0; 
// }

//         INVERTED HALF PYRAMID USING NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;   
//     } 
//     return 0; 
// }

//         HALF PYRAMID USING  SAME NUMBERS IN ONE ROW 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter any number:"<<endl;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;   
//     } 
//     return 0; 
// }

//         INVERTED HALF PYRAMID USING SAME NUMBERS IN ONE ROW
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;   
    } 
    return 0; 
}