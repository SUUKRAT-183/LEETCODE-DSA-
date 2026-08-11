class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int x=0,maxlen=0;
        for(auto & it: nums){
            if(it==1){
                x++;
            }
            else{
                x=0;
            }
            maxlen=max(maxlen,x);
        }
        return maxlen;
    }
};