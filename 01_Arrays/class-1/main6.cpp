#include <iostream>
#include <limits.h>
using namespace std;

// Find min and max in an array

void findMin(int arr[], int size) {
    int minAns = INT_MAX;
    for(int i=0; i<size; i++) {
        if(minAns > arr[i]) {
            minAns = arr[i];
        }
    }
    cout<<"Minimum of Array is : "<<minAns<<endl;
}

void findMax(int arr[], int size) {
    int maxAns = INT_MIN;
    for(int i=0; i<size; i++) {
        if(maxAns < arr[i]) {
            maxAns = arr[i];
        }
    }
    cout<<"Maximum of Array is : "<<maxAns<<endl;
}

int main() {

    int arr[5] = {19, 11, 4, 2, 7};
    int size = 5;

    findMin(arr, size);
    findMax(arr, size);

    return 0;
}