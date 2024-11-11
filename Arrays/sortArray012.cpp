#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to sort the array containing only 0s, 1s, and 2s
    void sortZeroOneTwo(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        // Counting the number of 0s, 1s, and 2s in the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt0++;
            else if (nums[i] == 1) cnt1++;
            else cnt2++;
        }

        /* Placing the elements in the
        original array based on counts*/
        //placing 0's
        for (int i = 0; i < cnt0; i++) nums[i] = 0;

        //placing 1's
        for (int i = cnt0; i < cnt0 + cnt1; i++) nums[i] = 1; 
        
        //placing 2's
        for (int i = cnt0 + cnt1; i < nums.size(); i++) nums[i] = 2;
    }
};
