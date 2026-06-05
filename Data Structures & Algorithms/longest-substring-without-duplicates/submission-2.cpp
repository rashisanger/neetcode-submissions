class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool> seen(256,false);

        int i=0,j=0,ans=0;

        while(j<s.length()){

            while(seen[s[j]]==true){
                seen[s[i]]=false;
                i++;
            }
            seen[s[j]]=true;
            ans=max(ans,(j-i+1));
            j++;
        }

        return ans;
    }
};
