class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i, j, n = nums.size(), temp;

        // check if already present
        for(i = 0; i < n; i++) {
            if(nums[i] == target) {
                return i;
            }
        }

        // insert new element
        nums.push_back(target);

        // bubble sort
        for(i = 0; i < n; i++) {
            for(j = 0; j < n - i; j++) {
                if(nums[j] > nums[j+1]) {
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        // find target index
        for(i = 0; i < n+1; i++) {
            if(nums[i] == target) {
                return i;
            }
        }

        return 0;
    }
};