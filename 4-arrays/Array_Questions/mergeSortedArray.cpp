#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // koi bhi array khatam hoga to iss while loop se nikal jayega aur jo array bachaga
    // uska remaining elements arr3 me jake direct copy karenge niche wale while loop 
    // ke conditions se 
    while(i < n && j < m) {
        if( arr1[i] < arr2[j] ) {
            arr3[k++] = arr1[i++];
        }

        else {
            arr3[k++] = arr2[j++];
        }
    }

    //copy kardo first array ke remaining elements ko
    while ( i < n) {
        arr3[k++] = arr1[i++];
    }

    // yaa copy kardo second array ke remaining elements ko
    while ( j < m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr3[], int k) {
    for(int i = 0; i < k; i++) {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}