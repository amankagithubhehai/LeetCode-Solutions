class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        fill(hash, hash + 256, -1);

        int maxi = 0;
        int l = 0, r = 0;
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            maxi = max(maxi, r - l + 1);
            hash[s[r]] = r;
            r++;
        }

        return maxi;
    }
};