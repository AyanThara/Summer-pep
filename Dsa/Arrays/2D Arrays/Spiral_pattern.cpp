#include<iostream>
using namespace std;
int main() {
    int arr[4][4] = {
        {6,8,10,12},
        {14,1,13,15},
        {5,11,9,3},
        {12,16,4,7}
    };
    int row = 4, col = 4;
    int topRow = 0, bottomRow = row - 1;
    int leftCol = 0, rightCol = col - 1;
    while(topRow <= bottomRow && leftCol <= rightCol) {
        // Top Row
        for(int i = leftCol; i <= rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;
        // Right Column
        for(int i = topRow; i <= bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;
        // Bottom Row
        for(int i = rightCol; i >= leftCol; i--) {
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;
        // Left Column
        for(int i = bottomRow; i >= topRow; i--) {
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}
