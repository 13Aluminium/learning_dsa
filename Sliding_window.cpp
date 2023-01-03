
#include<iostream>

using namespace std;

int get_distincts(int size, int arr[]){

    int count = 0;
    int j;
    for(int i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                break;
            }
        }

        if(j == size){
            count++;
        }
    }

    return count;

}

void solve(){

    int len_array;
    int window_size;
   
    cin >> len_array >> window_size;

    int arr[len_array];

    for(int i = 0; i < len_array; i++){
        cin >> arr[i];
    }

    if(len_array <= window_size){
        cout << get_distincts(len_array, arr);
        return;
    }

    int block[window_size];

    int score[len_array-window_size];

    for(int i = 0; i < len_array - window_size+1; i++){

        // Filling the block
        for(int j = 0; j < window_size; j++){

            block[j] = arr[i+j];

        }

        // After filling the array, find distinct element
        score[i] = get_distincts(window_size, block);

    }

    for(int i = 0; i < len_array - window_size+1; i++){

        cout << score[i] << " | " ;

    }


}

int main(){

    cout << "Enter test cases : " << endl;
    int T;

    cin >> T;
    for(int testcase = 0;testcase < T; testcase++ ){
        solve();
    }

    return 0;

}