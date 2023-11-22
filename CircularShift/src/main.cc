#include <iostream>
//O(n)

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightCircularShift(int arr[], int N, int k) {
    k = k % N; // to handle cases where k > N

    //let arr[]={1,2,3,4,5};

    // Reverse the entire array
    //arr[]={5,4,3,2,1};
    reverse(arr, 0, N - 1);

    // Reverse the first 'k' elements
    //let k=2
    //arr[]={4,5,3,2,1};
    reverse(arr, 0, k - 1);

    // Reverse the remaining elements
    //arr[]={4,5,1,2,3};
    reverse(arr, k, N - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,5,6,7,89,12,13};
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rightCircularShift(arr, N, k);

    std::cout << "Array after right circular shift by " << k << " positions:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
