class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(n==0 || (n==1 && citations[0]==0))
            return 0;
        if(n==1 && citations[0]>0){
            return 1;
        }
        int i=0,j=n-1,mid;
        while(i<=j){
            mid=i+(j-i)/2;
            if(citations[mid] >= n-mid){
                if(mid>=1){
                    if(citations[mid-1] < n-mid+1)
                        return n-mid;
                    else{
                        j=mid-1;
                    }
                }
                else
                    return n-mid;
            }
            else{
                i=mid+1;
            }
        }
        return 0;
    }
};
