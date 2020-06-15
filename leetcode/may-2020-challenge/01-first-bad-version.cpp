// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,hi=n,mid;
        
        while(low<=hi)
        {
            mid=low+(hi-low)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false){
                return mid;
            }
            if(isBadVersion(mid)){
                hi=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return mid;
    }
};