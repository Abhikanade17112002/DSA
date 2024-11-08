#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int zeroPtr = -1 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] ==  0 ){
                zeroPtr = i ;
                break ;
            }
        }

        if( zeroPtr == -1 ){
            return ;
        } 

        int nonZeroPtr = zeroPtr + 1 ;

        for( int i = nonZeroPtr ; i < nums.size() ; i++ ){
            if( nums[i] != 0 ){
                swap( nums[i] , nums[zeroPtr] );
                zeroPtr++ ;
            }
        }
        return ;
        
    }
};