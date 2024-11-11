#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN ;
       int pre = 1 , suf = 1 ;


        for( int i = 0 ; i < nums.size() ; i++ ){
              
              
               if( pre == 0 ){
                pre = 1 ;
              }
              if( suf == 0 ){
                suf  = 1 ;
              }
              
              pre = pre * nums[i] ;
              suf = suf * nums[ nums.size() - i - 1] ;

             
              maxi = max( maxi , max( pre , suf )) ;
              
        }
        
        return maxi ;
    }
};