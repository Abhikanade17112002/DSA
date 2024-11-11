#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>


class Solution {
public:
void merge( vector<int>& nums , int left , int mid , int right ){
        vector<int> temp ;
        int i = left ;
        int j = mid + 1 ;

        while(  i <= mid and j <= right ){
            if( nums[i] <= nums[j] ){
                temp.push_back(nums[i]) ;
                i++ ;
            }
            else{
                temp.push_back(nums[j]) ;
                j++ ;
            }
        }
        while(  i <= mid ){
            
                temp.push_back(nums[i]) ;
                i++ ;
           
            
        }
           while(  j <= right ){
            
                temp.push_back(nums[j]) ;
                j++ ;
           
            
        }




        for( int i = left ; i <= right ; i++ ){
            nums[i] = temp[i - left] ;
        }

    }
    int countPairs( vector<int>& nums , int left , int mid , int right  ){
        int cnt = 0 ;
        int j = mid + 1 ;
        for( int i = left ; i <= mid ; i++  ){

            while( j <= right and nums[i] > nums[j] * 2  ){
                j++ ;
            }


            cnt += ( j - (mid + 1 ) ) ;

        }





        return cnt ;
    }
   int  mergesort( vector<int>& nums  , int left , int right ){
                int cnt = 0 ;
                if(left < right ){
                   int mid = (  right - left ) / 2 + left  ;

                   cnt += mergesort( nums , left , mid ) ;
                   cnt  += mergesort( nums , mid + 1 , right ) ;
                   cnt += countPairs( nums , left , mid , right ) ;
                   merge( nums , left , mid , right ) ;
                }
                return cnt ;                      
    }
    int reversePairs(vector<int>& nums) {

        return mergesort( nums , 0 , nums.size() - 1 ) ;
        
    }
};




