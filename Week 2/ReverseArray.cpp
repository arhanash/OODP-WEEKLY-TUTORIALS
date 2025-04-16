#include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int* left = arr;             // Pointer to start of array
    int* right = arr + size - 1; // Pointer to end of array
    
    while (left < right) {
        // Swap values using pointers
        int temp = *left;
        *left = *right;
        *right = temp;
        
        // Move pointers
        left++;
        right--;
    }
}

int main() {
    int N;
    
    // Taking input for array size
    cout << "Enter the number of elements: ";
    cin >> N;
    
    int arr[N];
    
    // Taking input for array elements
    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Display original array
    cout << "Original array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse array using pointers
    reverseArray(arr, N);
    
    // Display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}