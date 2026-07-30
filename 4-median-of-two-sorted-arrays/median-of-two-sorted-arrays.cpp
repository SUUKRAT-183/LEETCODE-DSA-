#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> nums3;

        for (int i = 0; i < n1; i++) {
            nums3.push_back(nums1[i]);
        }

        for (int j = 0; j < n2; j++) {
            nums3.push_back(nums2[j]);
        }

        sort(nums3.begin(), nums3.end());

        int n = nums3.size();
        if (n % 2 == 1)
            return nums3[n / 2]; 
        else
            return (nums3[n / 2 - 1] + nums3[n / 2]) / 2.0;
    }
};