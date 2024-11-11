#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target ) {
        set<vector<int>> ans ;

        sort( nums.begin() , nums.end() ) ;
        
        int n = nums.size() ;

        for( int i = 0 ; i < n ; i++ ){
            if( i > 0 and nums[i] == nums[i - 1 ] ){
                continue ;
            }
            else{

                for( int j = i + 1 ; j < n ; j++  ){
                    if( j > i + 1 and nums[j - 1 ] == nums[j] ){
                        continue ;
                    }
                    else{
                        

                          int k = j + 1;
                          int l = n - 1  ;


                while(  k < l ){
                   long long   Sum = nums[i] + nums[j] ;
                   Sum +=  nums[k] + nums[l]  ;

                    if( Sum < target ){
                      k++ ;
                    }
                    else if( Sum > target ){
                      l-- ;
                    }
                    else if( Sum == target ) {
                     ans.insert ({ nums[i] , nums[j] , nums[k] , nums[l]}) ;
                     k++ ;
                     l-- ;
                     while( k < l and nums[k] == nums[k-1]){
                        k++ ;
                     }
                     while( k < l and nums[l] == nums[k+1]){
                        k-- ;
                     }
                    }  
                }





                    }
                }
               
               
            }
        }
         vector< vector< int > > answere( ans.begin() , ans.end()) ;
        return answere;
        
    }
};