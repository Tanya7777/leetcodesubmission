class FindSumPairs {
    vector<int> nums1, nums2;
    unordered_map<int, int> freq2;

public:
    FindSumPairs(vector<int>& input1, vector<int>& input2) {
        nums1 = input1;
        nums2 = input2;

        for (int num : nums2) {
            freq2[num]++;
        }
    }

    void add(int index, int val) {
        int oldVal = nums2[index];
        freq2[oldVal]--;
        if (freq2[oldVal] == 0) freq2.erase(oldVal);

        nums2[index] += val;
        freq2[nums2[index]]++;
    }

    int count(int tot) {
        int result = 0;
        for (int num : nums1) {
            int complement = tot - num;
            if (freq2.count(complement)) {
                result += freq2[complement];
            }
        }
        return result;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */