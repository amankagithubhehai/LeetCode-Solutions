class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        const int mod = 1000000007;
        int n = s.length();

        vector<int> pfString(n);   // stores number modulo mod
        vector<int> pfLen(n);      // stores number of non-zero digits
        vector<int> pfSum(n);
        vector<long long> pow10(n + 1);
        pow10[0] = 1;

        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % mod;
        }
        long long curr = 0;
        int len = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum = (sum + (s[i] - '0')) % mod;

            if (s[i] != '0') {
                curr = (curr * 10 + (s[i] - '0')) % mod;
                len++;
            }

            pfString[i] = curr;
            pfLen[i] = len;
            pfSum[i] = sum;
        }

        vector<int> ans(q.size());

        for (int i = 0; i < q.size(); i++) {
            int l = q[i][0];
            int r = q[i][1];

            if (l == 0) {
                ans[i] = (1LL * pfString[r] * pfSum[r]) % mod;
            } else {
                int digits = pfLen[r] - pfLen[l - 1];

                long long p = pow10[digits];
                long long num =
                    (pfString[r] - (p * pfString[l - 1]) % mod + mod) % mod;

                ans[i] =
                    (1LL * num * ((pfSum[r] - pfSum[l - 1] + mod) % mod)) % mod;
            }
        }

        return ans;
    }
};
