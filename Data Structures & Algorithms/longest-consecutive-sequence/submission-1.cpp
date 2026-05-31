class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];

            if(s.find(num-1)==s.end()){
                int seqLen=0;
                int seqStart=num;
                while(s.find(seqStart)!=s.end()){
                    seqLen++;
                    seqStart++;
                }
                ans=max(ans,seqLen);
            }
        }
        return ans;

    }
};
