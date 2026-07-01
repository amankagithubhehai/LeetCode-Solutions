class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int s1=nums[0];
        for(int i=1;i<nums.size();i++){
   if(i%2!=0) s1-=nums[i];
   else s1+=nums[i];
        }
return s1;
    }
};