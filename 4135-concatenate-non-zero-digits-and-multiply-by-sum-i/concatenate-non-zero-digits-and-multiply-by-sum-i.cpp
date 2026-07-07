class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string t = "";

        for (char ch : s) {
            if (ch != '0')
                t.push_back(ch);
        }
          if (t.empty()) return 0;


        long long num = stoll(t);

        long long sum = 0;
        for (char ch : t) {
            sum += ch - '0';
        }

        return num * sum;
    }
};