#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c;
    cout<<"Enter the value of test case:";
    cin>>s;
    int u=0;
    while(u<s)
    {

        cout<<"Enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the element of array:";
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"Enter the size of sliding window:";
        int x;
        cin>>x;
        int y;
        for(int k=0;k<n-x+1;k++)
        {
            y=x;
            for(int i=k;i<x+k;i++)
            {
                for(int j=i+1;j<x+k;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        y--;
                        break;
                    }
                }
            }
            cout<<"Distinct value is: "<<y<<endl;
        }
        u++;
    }
    return 0;
}
