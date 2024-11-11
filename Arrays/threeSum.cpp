#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans ;

        sort( nums.begin() , nums.end() ) ;
        
        int n = nums.size() ;

        for( int i = 0 ; i < n ; i++ ){
            if( i > 0 and nums[i] == nums[i - 1 ] ){
                continue ;
            }
            else{

                int j = i + 1 ;
                int k = n - 1 ;


                while(  j < k ){
                    int Sum = nums[i] + nums[j] + nums[k] ;

                    if( Sum < 0 ){
                      j++ ;
                    }
                    else if( Sum > 0 ){
                      k-- ;
                    }
                    else if( Sum == 0 ) {
                     ans.push_back( { nums[i] , nums[j] , nums[k] }) ;
                     j++ ;
                     k-- ;
                     while( j < k and nums[j] == nums[j-1]){
                        j++ ;
                     }
                     while( j < k and nums[k] == nums[k+1]){
                        k-- ;
                     }
                    }  
                }
            }
        }

        return ans ;
        
    }
};