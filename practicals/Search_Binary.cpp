#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
    }
    return -1;
}
int main(){
   int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the find element:";
    cin>>key;
    cout<<key<<" is at index "<<binarySearch(arr,n,key);
cout<<"\n21DCE052";return 0; }

