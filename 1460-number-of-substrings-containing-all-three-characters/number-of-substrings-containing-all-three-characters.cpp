class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();

        int p[3] = {-1, -1, -1};
        int ans = 0;

        for (int i = 0; i < n; i++) {
            p[s[i] - 'a'] = i;

            ans += min({p[0], p[1], p[2]}) + 1;
        }

        return ans;
    }
};