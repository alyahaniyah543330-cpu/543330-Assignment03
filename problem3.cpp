#include <iostream>
using namespace std;

int linearSearch(int* arr, int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int* arr, int n, int target) {
    int lo = 0;
    int hi = n - 1;

    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return -1;
}

int* generateSortedArray(int n) {
    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        arr[i] = 2 * i;   // {0,2,4,...}
    }

    return arr;
}

int main() {
    int sizes[] = {10, 100, 1000};

    for(int i = 0; i < 3; i++) {
        int n = sizes[i];
        int* arr = generateSortedArray(n);

        cout << "Array size: " << n << endl;

        // value that exists (midpoint element)
        int target_exist = arr[n/2];

        int idx1 = linearSearch(arr, n, target_exist);
        int idx2 = binarySearch(arr, n, target_exist);

        cout << "Search existing value (" << target_exist << ")" << endl;
        cout << "Linear Search index: " << idx1 << endl;
        cout << "Binary Search index: " << idx2 << endl;

        if(idx1 == idx2)
            cout << "Both algorithms agree." << endl;
        else
            cout << "Mismatch!" << endl;

        // value that does not exist
        int target_not_exist = -1;

        idx1 = linearSearch(arr, n, target_not_exist);
        idx2 = binarySearch(arr, n, target_not_exist);

        cout << "\nSearch non-existing value (" << target_not_exist << ")" << endl;
        cout << "Linear Search index: " << idx1 << endl;
        cout << "Binary Search index: " << idx2 << endl;

        if(idx1 == idx2)
            cout << "Both algorithms agree." << endl;
        else
            cout << "Mismatch!" << endl;

        cout << "-----------------------\n";

        delete[] arr;
    }

    return 0;
}
