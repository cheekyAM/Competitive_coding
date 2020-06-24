class Solution:
    def numTrees(self, n: int) -> int:
        a=1
        b=n+1
        for i in range(n+2,2*n +1):
            b=b*i
        for j in range(1,n+2):
            a=a*j
            
        return int(float(b/a))
        
        
