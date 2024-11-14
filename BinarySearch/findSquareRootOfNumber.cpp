class Solution {
public:
    long long floorSqrt(long long n)  {


        long long ans = 1  ;
        if( n == 0 ){
            return 0 ;
        }

        int left  = 1 , right = sqrt(n) ;

        while( left <= right ){
            int mid = (left+right)/ 2 ;

            if( mid*mid <= n ){
                ans = mid ;
                left = mid + 1 ;
            }
            else{
                right = mid - 1 ;
            }
        } 


        return ans ;
      
    }
};