class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p(m);
        iota(p.begin(), p.end(), 1);

        vector<int> ans;

        for (int q : queries) {

            int pos = 0;

            while (p[pos] != q)
                pos++;

            ans.push_back(pos);

            p.erase(p.begin() + pos);
            p.insert(p.begin(), q);
        }

        return ans;
    }
};