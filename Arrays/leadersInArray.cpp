#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> leaders(vector<int>& nums) { 


        vector<int> ans ;

        int currLeader = nums[nums.size() - 1 ] ;

        ans.push_back(currLeader) ;
        
        for( int i = nums.size() - 2 ; i >= 0 ; i-- ){
            if( nums[i] > currLeader ){
                currLeader = nums[i] ;
                ans.push_back(currLeader) ;
            }
        }



        reverse( ans.begin() , ans.end() ) ;
        return ans ;
      
    }
};