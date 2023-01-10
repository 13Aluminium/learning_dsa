#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c;
    // int x,y;
    // cout<<"Enter the value of test case:";
    // cin>>s;
    int u=0;


        cout<<"Enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the element of array:";
        for(int i=0;i<n;i++){
        cin>>arr[i];
        
        }
        int count=0;
        //     cout<<"Enter the size of sliding window:";
        // int x;
        // cin>>x;
        // int y;

        //  for(int k=0;k<n-x+1;k++)
        // {
        //     y=x;
        //     for(int i=k;i<x+k;i++)
        //     {
        //         for(int j=i+1;j<x+k;j++)
        //         {
        //             if(arr[i]==arr[j])
        //             {
        //                 y--;
        //                 break;
        //             }
        //         }
        //     }
        //                 cout<<"Distinct value is: "<<y<<endl;

        // }
        int max=0;
        cout<<"enter the maximum capacity";
        cin>>max;
        int min=0;
        cout<<"enter the minimum capacticy";
        cin>>min;
        int sum =0;
        int k=0;
        int ele;
        for(int i=0;i<n;i++){
            k=1;
            for(int j=i+1;j<n;j++){
                ele=k+1;
                 sum = arr[j]+sum;
                 if(sum<=max && sum>=min){
                    count++;
                    k++;
                    cout<<"flag";
                 }

            }
              
        }
        cout<<"thios is hguhr";cout<<ele;
        

 }