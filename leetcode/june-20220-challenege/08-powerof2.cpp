class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        while(n>0)
        {
            if(n%2==1)
                break;
            n=n/2;
        }
        if(n>1)
            return false;
        
        return true;
    }
};