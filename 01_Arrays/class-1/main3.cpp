#include <iostream> 
using namespace std;

// Linear search

int main() {
    int arr[5] = {2, 18, 9, 10, 54};
    int target = 10;
    int n = 5;

    bool flag = 0;
    // flag = 1 : found
    // flag = 0 : not found

    for(int i=0; i<5; i++) {
        if(arr[i] == target) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout<<"Target found!"<<endl;
    }
    else {
        cout<<"Target not found!"<<endl;
    }

    return 0;
}