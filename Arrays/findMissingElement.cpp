#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int actualSum = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            actualSum += nums[i] ;
        }

        int size = nums.size() ;

        int requiredSum = ((size)*(size+1))/2 ;
        return  requiredSum - actualSum ;
        
    }
};