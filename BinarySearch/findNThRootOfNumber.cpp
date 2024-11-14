class Solution:
    
    def calcProduct( self ,m , n ) :
      ans = 1

      for i in range( 1 , n+1):
        ans = ans * m

      return ans   
    def NthRoot(self, n, m):
      low = 1 
      high = m 


      while( low <= high):
        mid = low + ( high - low )//2 

        if( self.calcProduct( mid , n ) == m ):
          return mid 

        if( self.calcProduct( mid , n ) > m ):
          high = mid - 1 
        else :
          low = mid + 1     
      return -1
      