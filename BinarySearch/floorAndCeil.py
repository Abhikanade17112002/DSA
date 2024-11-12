class Solution:
    def getFloor( self , nums , x  ):
        left = 0
        right = len( nums ) - 1
        ans = len( nums )

        while( left <= right ):
            mid = ( left + right ) // 2 
            if( nums[mid] <= x ):
                ans = nums[mid] 
                left = mid + 1 
            else :
               right = mid - 1

        if ans == len( nums ) :
            return -1 
        else :       
            return ans  


    def getCeil( self , nums , x  ):
        left = 0
        right = len( nums ) - 1
        ans = len( nums )

        while( left <= right ):
            mid = ( left + right ) // 2 
            if( nums[mid] >= x ):
                ans = nums[mid] 
                right = mid - 1 
            else :
               left = mid + 1
        
        if ans == len( nums ) :
            return -1 
        else :       
            return ans      

    def getFloorAndCeil(self, nums, x):

        floor = -1 
        ceil = -1 

        floor = self.getFloor( nums , x )
        ceil = self.getCeil( nums, x)

        
        return [ floor , ceil ]
       
