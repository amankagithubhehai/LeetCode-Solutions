class Solution {
public:
    long long gcdSum(vector<int>& A) {
        int mx = 0;

        for (int &x : A) {
            mx = max(mx, x);
            x = gcd(x, mx);
        }

        sort(A.begin(), A.end());

        long long ans = 0;
        int n = A.size();

        for (int i = 0; i < n / 2; i++) {
            ans += gcd(A[i], A[n - 1 - i]);
        }

        return ans;
    }
};