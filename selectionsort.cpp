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
    int min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        } 
        int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp; 
    }
       for(i=0;i<n;i++){
        cout<<arr[i];
    }
    
}