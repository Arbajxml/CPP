#include <iostream>
using namespace std;

void countZeroAndOnes(int arr[], int size) {
    int zero = 0;
    int one = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] == 0) {
            zero++;
        }
        else {
            one++;
        }
    }

    cout<<"Count of zero's is : "<<zero<<endl;
    cout<<"Count of one's is : "<<one<<endl;
}

int main() {

    int arr[11] = {0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1};
    int size = 11;

    countZeroAndOnes(arr, size);

    return 0;
}