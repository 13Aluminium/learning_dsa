#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=1;i<n;i++)
    {
         temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
   cout<<"After Insertion sort:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 
