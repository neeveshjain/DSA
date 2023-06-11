// Problem: Spiral Matrix
// Description: Given an m x n matrix, return all elements of the matrix in spiral order.
// Example:
// Input: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
// Output: Spiral order = [1, 2, 3, 6, 9, 8, 7, 4, 5]

#include <iostream>
using namespace std;

const int MAX_SIZE = 3;

void printSpiralMatrix(int arr[][MAX_SIZE], int n) {
    int topRow = 0, bottomRow = n - 1;
    int leftCol = 0, rightCol = n - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        // Print top row
        for (int i = leftCol; i <= rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Print right column
        for (int i = topRow; i <= bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Print bottom row
        if (topRow <= bottomRow) {
            for (int i = rightCol; i >= leftCol; i--) {
                cout << arr[bottomRow][i] << " ";
            }
            bottomRow--;
        }

        // Print left column
        if (leftCol <= rightCol) {
            for (int i = bottomRow; i >= topRow; i--) {
                cout << arr[i][leftCol] << " ";
            }
            leftCol++;
        }
    }
}

int main() {
    int arr[MAX_SIZE][MAX_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = MAX_SIZE;

    printSpiralMatrix(arr, n);

    return 0;
}
