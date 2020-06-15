class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(target > nums[n-1])
            return n;
        int i=0,j=n-1,mid;
        while(i<j){
            mid=i+ (j-i)/2;
            if(nums[mid]>=target){
                j=mid;
                
            }
            else{
                i=mid+1;
            }
        }
      
        return j;
        
    }
};