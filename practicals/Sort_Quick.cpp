#include<bits/stdc++.h>
using namespace std;
int part(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l;
    int j=h;
    int temp;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}
void quick(int arr[],int l,int h)
{
    if(l<h)
    {
        int loc=part(arr,l,h);
        quick(arr,l,loc-1);
        quick(arr,loc+1,h);
    }
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
    quick(arr,0,n);
       cout<<"After Quick sort:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<"\n21DCE052";return 0; }
