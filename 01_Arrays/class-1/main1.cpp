#include <iostream>
using namespace std;

// Question: take input of array and double it then print it

int main() {
    int arr[10];

    for(int i = 0; i<10; i++) {
        cout<<"Enter the value of array  for index "<<i<<" : ";
        cin>>arr[i];
        cout<<endl;
    }

    for(int i = 0; i<10; i++) {
        int doubleUp = arr[i] * 2;
        cout<<"Double up value of array is : "<<doubleUp<<endl;
    }
    return 0;
}