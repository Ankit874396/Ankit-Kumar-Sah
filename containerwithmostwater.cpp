#include<iostream>
using namespace std;
int main() {
   /* int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;
    int maxwater = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int width = j-i;
            int ht = min(height[i], height[j]);
            int area = width * ht;
            maxwater = max(maxwater, area);

        }
    } 
    cout << maxwater << endl;
    return maxwater;  */



    
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;
    int maxwater = 0;
    int leftpointer = 0;
    int rightpointer = n-1;
    while(leftpointer < rightpointer) {
        int width = rightpointer - leftpointer;
        int ht = min(height[leftpointer], height[rightpointer]);
        int area = width * ht;
        maxwater = max(maxwater, area);
        if (height[leftpointer] < height[rightpointer]) {
            leftpointer++;
        } else {
            rightpointer--;
        }
    }
    cout << maxwater << endl;
    return maxwater;
}