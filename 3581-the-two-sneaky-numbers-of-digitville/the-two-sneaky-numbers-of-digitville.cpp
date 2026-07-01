class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>fq;
        vector <int> a;
        for(int n:nums) fq[n]++;
   for(auto it:fq)
   if(it.second>1) a.push_back(it.first);

   return a;
    }
};