class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
int ans=0;
        for(int i=0;i<nums.size();i++){
             ans=ans^nums[i];
        }
        while(k || ans){
            if((k%2)!=(ans%2)) cnt++;

            k/=2;
            ans/=2;
        }
        return cnt;
    }
};