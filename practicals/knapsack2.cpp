#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,K,C,sum=0,cnt=0,j;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>C>>K;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        //window
        for(int i=N;i!=0;i--){
            //window sliding
            for(int k=0;k<N-i+1;k++){
                sum=0;
                //sum
                for(j=k;j<i+k;j++){

                    sum=sum+arr[j];
                }
                if(sum<=C && sum>=K){
                    cout<<i;
                    break;
                }
            }
            if(sum<=C && sum>=K)
                break;
        }
    }
}