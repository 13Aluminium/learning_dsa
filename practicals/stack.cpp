#include<bits/stdc++.h>
using namespace std;
/// @brief 
int top=0;
int temp;
        int *arr=new int[temp];
        int pop_var;
        int push_var;

void  push(int arrr){
    int arr_len= arrr;
    arr[arr_len];
    cout<<"\nenter the element you want to enter\n";
    cin>>pop_var;

    if(arr_len==top){
        cout<<"\noverflow\n";
    }
    else{

        arr[top]=pop_var;
        top++;
    }
}


void display(){
    // int arr_len = arrr;
    // arr[arr_len];
    if(top==0){
        cout<<"\nnothing ti display\n";
    }
    else{
    for(int i=0;i<top;i++){
        cout<<arr[i]<<endl;
    }}

}



void pop(int arrr){
    int arr_len= arrr;
    arr[arr_len];
  

    if(top == 0){
        cout<<"\nunderflow\n";
    }
    else{

    //    cout<< arr[top];
        top--;
    }
}



int main(){
  
    int switch_num;

     int arr_len;
    cout<<"\nenter the length of array\n";
    cin>>arr_len;
        arr[arr_len];

   
    do {
            cout<<"enter the number 1 for push \n number 2 for pop \n number 3 for display \n number 0 for exit\n";
    cin>>switch_num;
        switch (switch_num)
        {
        case 1:
            push(arr_len);
            break;
        case 2:
            pop(arr_len);
            break;
        case 3:
            display();
            break;
            
        default:
            break;
        }
} while( switch_num!=0 );
return 0;
}

