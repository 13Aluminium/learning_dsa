#include<iostream>

using namespace std;

int main(){
     cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int i,j;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for (j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    cout<<"sorted array"<<endl;
  for(i=0;i<n;i++){
        cout<<arr[i];
    }
    }