class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int first=-1;
        while(i<=j){
            if(nums[i]==2){
                nums[i]=nums[j];
                nums[j]=2;
                j--;
                
            }
            else if(nums[i]==1){
                if(first<0)
                    first=i;
                i++;
                
            }
            else{
                if(first>=0){
                    nums[i]=1;
                    nums[first]=0;
                    first++;
                    i++;
                }
                else
                    i++;
            }
                
        }
        
    }
};