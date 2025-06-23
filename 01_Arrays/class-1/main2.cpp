#include <iostream>
using namespace std;

// Take input of array and print sum of the array

int main() {
    int arr[5];
    int n = 5;
    int sum = 0;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        sum +=  arr[i];
    }

    cout<<"Sum of array: "<<sum<<endl;

    return 0;
}