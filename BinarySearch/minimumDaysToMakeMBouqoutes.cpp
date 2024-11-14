class Solution {
private:
    /* Function to check if it's possible to make
    m bouquets with k flowers each on day */
    bool possible(vector<int> &nums, int day, int m, int k) {
        int n = nums.size(); 
        
        // Count of flowers bloomed
        int cnt = 0; 
        
        // Count of bouquets formed
        int noOfB = 0; 

        // Count number of bouquets that can be formed
        for (int i = 0; i < n; i++) {
            if (nums[i] <= day) {
                // Increment flower count
                cnt++; 
            } else {
                /* Calculate number of bouquets
                formed with flowers <= day */
                noOfB += (cnt / k);
                
                // Reset flower count
                cnt = 0; 
            }
        }
        // Add remaining flowers as a bouquet
        noOfB += (cnt / k); 

        /* Return true if enough 
        bouquets can be formed */
        return noOfB >= m; 
    }
public:
    /* Function to find the earliest day to
    make m bouquets of k flowers each */
    int roseGarden(int n, vector<int> nums, int k, int m) {
        
        /* Calculate the minimum 
        number of flowers required*/
        long long val = m * 1ll * k * 1ll; 
        
        /* Impossible case: not enough 
        flowers to make m bouquets*/
        if (val > n) return -1; 
        
        /* Find maximum and minimum
        bloom days in the array */
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]); 
            maxi = max(maxi, nums[i]); 
        }

        /* Binary search to find the
        earliest day to make m bouquets */
        int left = mini, right = maxi, ans = -1;
        while (left <= right) {
            
            // Calculate the middle day
            int mid = left + (right - left) / 2; 
            
            /* Check if it's possible to 
            make m bouquets on day mid */
            if (possible(nums, mid, m, k)) {
                
                // Update the answer to mid
                ans = mid; 
                
                // Try for a smaller day
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        
        /* Return the earliest day or
        -1 if no such day exists */
        return ans; 
    }
};

