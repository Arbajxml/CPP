#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            zeroCount++;
        }
        else {
            oneCount++;
        }
    }

    int index = 0; 

    while (zeroCount--) {
        arr[index] = 0;
    }
    while(oneCount--) {
        arr[index] = 1;
    }

    for (int i=0; i<n; i++) {
        cout<<arr[i];
    }
}

int main() {

    int arr[] = {1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0};
    int n = 13;

    sortZeroOne(arr, n);

    return 0;
}