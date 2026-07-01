class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>a;
        for(int n:nums){
if(n==1) a.push_back(1);
else if(n%2==0) a.push_back(0);
else a.push_back(1);
        }
        sort(a.begin(),a.end());
        return a;
    }
};