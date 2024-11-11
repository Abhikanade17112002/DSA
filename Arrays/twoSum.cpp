#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map < int , int > mpp ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            int currElement = nums[i] ;

            int diff = target - currElement ;

            if( mpp.find(diff) != mpp.end() ){
                return { mpp[diff] , i} ;
            }

            mpp[currElement] = i ;
        }




        return { -1 , -1 } ;   
    }
};