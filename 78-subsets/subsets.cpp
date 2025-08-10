class Solution {
public:
    void helper(int index, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
        if (index == nums.size()) {
            ans.push_back(temp); // store the current subset
            return;
        }

        // Case 1: Include current element
        temp.push_back(nums[index]);
        helper(index + 1, nums, temp, ans);

        // Case 2: Exclude current element
        temp.pop_back();  
        helper(index + 1, nums, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, nums, temp, ans);
        return ans;
    }
};
