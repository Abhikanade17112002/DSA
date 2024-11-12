class Solution:
    def findMin(self, arr):
        
        minEle = arr[0] 
        minEleInd = 0
        left = 0  
        right = len( arr ) - 1
        n = len( arr) 
   
        while( left <= right ) :
            mid = ( left + right ) // 2 
            if( arr[left] <= arr[mid] ):
                if( arr[left] < minEle):
                    minEleInd = left
                    minEle = arr[left]
                left = mid + 1 
            else :
                if( arr[mid] < minEle):
                    minEleInd = mid
                    minEle = arr[mid]
                right = mid - 1    
        return minEleInd
    
    
    
    def findKRotation(self, nums):
        return self.findMin(nums)