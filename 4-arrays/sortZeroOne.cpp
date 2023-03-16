#include<iostream>
using namespace std;

void sortOne(int arr[], int size) {
    int left = 0;
    int right = size-1;
    
    while(left < right) {

        if(arr[left] == 0) {
        left++;
        }

        if(arr[right] == 1) {
        right--;
        }

        //agar yahan pahuch gaye iska matlab 
        //arr[left] == 1 hai aur arr[right] == 0 hai
        
        if(arr[left] == 1 && arr[right] == 0) {
        swap(arr[left], arr[right]);
        left++;
        right--;

        }
    }
}

void print(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " " ;
    }
    cout<<endl;
}


int main() {
    int arr[8] = {1,1,1,1,0,0,0,0};

    sortOne(arr,8);
    print(arr,8);

    return 0;
}