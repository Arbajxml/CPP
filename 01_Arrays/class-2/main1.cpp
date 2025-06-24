#include <iostream>
using namespace std;

// Find unique element in an array

int findUniqueElement(int arr[], int size) {
    int ans = 0; 

    for(int i=0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    
    int arr[] = {12, 11, 33, 12, 22, 33, 11, 10, 22, 10, 19};
    int size = 11;

    int finalAns = findUniqueElement(arr, size);
    cout<<"Final ans: "<<finalAns<<endl;

    return 0;
}