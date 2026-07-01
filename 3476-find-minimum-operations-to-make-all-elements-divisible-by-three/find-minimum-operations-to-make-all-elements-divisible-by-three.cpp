class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=(nums[i]%3!=0);
return sum;
    }
};