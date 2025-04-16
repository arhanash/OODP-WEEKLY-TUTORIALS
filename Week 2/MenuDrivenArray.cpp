#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
int arr[MAX_SIZE], size = 0;

void insertElement(int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        cout << "Element inserted!\n";
    } else {
        cout << "Array is full!\n";
    }
}

void deleteElement(int element) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            cout << "Element deleted!\n";
            return;
        }
    }
    cout << "Element not found!\n";
}

void searchElement(int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            cout << "Element found!\n";
            return;
        }
    }
    cout << "Element not found!\n";
}

void displayElements() {
    if (size == 0) {
        cout << "Array is empty!\n";
    } else {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

void sortArray() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Array sorted!\n";
}

int main() {
    char option;
    int element;

    do {
        cout << "\nMenu:\n";
        cout << "a. Insert\nb. Delete\nc. Search\nd. Display\ne. Sort\nf. Exit\n";
        cout << "Enter choice: ";
        cin >> option;

        switch (option) {
            case 'a': cout << "Enter element: "; cin >> element; insertElement(element); break;
            case 'b': cout << "Enter element: "; cin >> element; deleteElement(element); break;
            case 'c': cout << "Enter element: "; cin >> element; searchElement(element); break;
            case 'd': displayElements(); break;
            case 'e': sortArray(); break;
            case 'f': cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (option != 'f');

    return 0;
}
