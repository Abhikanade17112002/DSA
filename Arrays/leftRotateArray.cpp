#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
         k = k%nums.size() ;
         reverse( nums.begin() , nums.begin() + k ) ;
         reverse( nums.begin() + k , nums.end() ) ;
         reverse( nums.begin() , nums.end() ) ;
        
    }
};