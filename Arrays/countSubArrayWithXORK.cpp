#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;


class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
         unordered_map< int , int > mpp ;

        mpp[0] = 1 ;
        int Count = 0 ;
        int Sum = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
              
              Sum = Sum ^ nums[i] ;

              int remaning = Sum ^ k ;

              if( mpp.find(remaning) != mpp.end() ){
                Count = Count + mpp[remaning] ;
              } 


              mpp[Sum] = mpp[Sum] + 1 ;
        }

        return Count ;

        
        
    }
};