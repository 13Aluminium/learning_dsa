#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int i;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }   
        cout<<"sorted array"<<endl;
        for(i=0;i<n;i++){
            cout<<arr[i]<<endl;

        }
    return 0;
}

