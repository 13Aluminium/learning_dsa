#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }    cout<<"After Selection sort:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
