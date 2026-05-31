class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> minHeap;

        for(auto it:freq){
            minHeap.push({it.second,it.first});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;


    }
};
