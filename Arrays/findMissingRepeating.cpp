#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {


        long long actualSum = 0 ;
        long long requiredSum = 0 ;
        long long actualSquaredSum = 0 ;
        long long requiredSquaredSum = 0 ;
        long long n = nums.size() ;
        for( int i = 0 ; i < n ; i++ ){
            actualSum = actualSum + nums[i] ;
            actualSquaredSum = actualSquaredSum + nums[i]* nums[i] ;
        }
         for( int i = 1 ; i <= n ; i++ ){
            requiredSum = requiredSum + i ;
            requiredSquaredSum = requiredSquaredSum + i* i ;
        }

       long long  xMinusY = requiredSum - actualSum ;
       long long  xPlusY = (requiredSquaredSum - actualSquaredSum ) / (xMinusY) ;
        // cout<<xMinusY<<endl ;
        // cout<<xPlusY<<endl ;

        int X = (xMinusY + xPlusY) / 2 ;

        int Y = xPlusY - X ;
        return {Y,X} ; 

    }

};


