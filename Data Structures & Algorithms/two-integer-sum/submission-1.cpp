class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> x;
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(x.find(diff)!=x.end()){
                return {x[diff],i};
            }else{
                x[nums[i]]=i;
            }
        }
        return {};
    }
};
