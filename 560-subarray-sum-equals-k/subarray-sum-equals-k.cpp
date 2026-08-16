class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int l=0,c=0,r=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    c++;
                }
            }
            sum=0;
        }
        return c;
    }
};