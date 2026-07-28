class Solution {
public:
    unordered_map<string, bool> dp;

    bool helper(string& s, int i, int open) {
        if (open < 0)
            return false;

        if (i == s.length())
            return open == 0;

        string key = to_string(i) + "_" + to_string(open);

        if (dp.find(key) != dp.end())
            return dp[key];

        bool ans;

        if (s[i] == '(') {
            ans = helper(s, i + 1, open + 1);
        } 
        else if (s[i] == ')') {
            ans = helper(s, i + 1, open - 1);
        } 
        else {
            ans = helper(s, i + 1, open) ||        // '* = empty'
                  helper(s, i + 1, open + 1) ||   // '* = '('
                  helper(s, i + 1, open - 1);     // '* = ')'
        }

        return dp[key] = ans;
    }

    bool checkValidString(string s) {
        dp.clear();
        return helper(s, 0, 0);
    }
};