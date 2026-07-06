class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int cnt = 0;
        int n = intervals.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j &&
                    intervals[j][0] <= intervals[i][0] &&
                    intervals[j][1] >= intervals[i][1]) {
                    cnt++;
                    break;
                }
            }
        }

        return n - cnt;
    }
};