class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        vector<int> prev(n,-1);
        vector<int> z;
        if(n==0)
            return z;
        sort(nums.begin(),nums.end());
        int max_ind=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(v[i]<v[j]+1){
                        v[i]=v[j]+1;
                        prev[i]=j;
                    }
                }
            }
            if(v[max_ind]<v[i])
                max_ind=i;
        }
        int k=max_ind;
        while(k>=0){
            z.push_back(nums[k]);
            k=prev[k];
        }
        
        return z;
    }
};