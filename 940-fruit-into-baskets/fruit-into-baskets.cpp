class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,mx=0;
        int n=fruits.size();
        map<int,int> fq;
        while(r<n){
            fq[fruits[r]]++;
            if(fq.size()>2){
                fq[fruits[l]]--;
                if(fq[fruits[l]]==0) fq.erase(fruits[l]);
                l++;
            }
            mx=max(mx,r-l+1);
            r++;
        }
        return mx;
    }
};