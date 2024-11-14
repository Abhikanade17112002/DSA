class Solution {
public:
private:
    /* Helper function to find the
    maximum element in the vector */
    int findMax(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        
        // Find the maximum element
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }

    /* Helper function to calculate total 
    hours required at given hourly rate */
    int calculateTotalHours(vector<int>& nums, int hourly) {
        int totalH = 0;
        int n = nums.size();
        
        // Calculate total hours required
        for (int i = 0; i < n; i++) {
            totalH += ceil((double) nums[i] / (double) hourly);
        }
        return totalH;
    }

public:
    /* Function to find the 
    minimum rate to eat bananas */
    int minimumRateToEatBananas(vector<int>& nums, int h) {
        // Initialize binary search bounds
        int low = 1, high = findMax(nums);

        // Apply binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            int totalH = calculateTotalHours(nums, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
