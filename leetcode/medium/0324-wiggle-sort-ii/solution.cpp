class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        // vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        int mid = (n - 1) / 2;
        int right = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = nums[mid--];
            } else {
                nums[i] = nums[right--];
            }
        }
    }
};