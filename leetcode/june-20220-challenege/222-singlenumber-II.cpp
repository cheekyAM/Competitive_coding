class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long sum=0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            s.insert(nums[i]);
        }
        long long d=0;
        for(long long x:s){
            d +=3*x;
        }
        return (d-sum)/2;
    }
};
