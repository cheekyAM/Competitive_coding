class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        
        int n=nums.size();
        int k=n/2;
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second >k)
                return itr->first;
        }
        return 0;
    }
};