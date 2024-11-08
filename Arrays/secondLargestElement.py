class Solution:
    def secondLargestElement(self, nums):
        largestElement = nums[0] 
        secondLargest = -1 

        for i in range( 0 , len( nums ) ) :

            if nums[i] > largestElement :
                secondLargest = largestElement
                largestElement = nums[i]
            elif nums[i] < largestElement and nums[i] > secondLargest :
                secondLargest =  nums[i]

        return secondLargest 