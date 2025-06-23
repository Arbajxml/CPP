#include <iostream>
using namespace std;

//Linear search with functions

bool linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {

    int arr[5] = {5, 10, 15, 17, 32};
    int size = 5;
    int target = 17;
    bool status = linearSearch(arr, size, target);

    if(status == 1) {
        cout<<"Target found!"<<endl;
    }
    else {
        cout<<"Target not found!"<<endl;
    }

    return 0;
}