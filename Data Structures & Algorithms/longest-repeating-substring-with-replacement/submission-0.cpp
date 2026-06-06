class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);

        int i=0,j=0,maxfreq=0,ans=0;

        while(j<s.length()){

            freq[s[j]-'A']++;
            maxfreq=max(maxfreq,freq[s[j]-'A']);

            while(((j-i+1)-maxfreq)>k){
                freq[s[i]-'A']--;
                i++;
            }
            ans=max(ans,(j-i+1));
            j++;

        }
        return ans;
    }
};
