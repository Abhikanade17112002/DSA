class Solution:
    def largestElement(self, nums):
        largestElement = -1 
        for i in range( 0 , len(nums) ):
            if nums[i] > largestElement :
                largestElement = nums[i]

        return largestElement         
        