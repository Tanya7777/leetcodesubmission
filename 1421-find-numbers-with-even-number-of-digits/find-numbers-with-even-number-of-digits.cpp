class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;
            int n = num;

            while (n > 0) {
                n /= 10;       // remove the last digit
                digits++;      // count digits
            }

            if (digits % 2 == 0) {
                count++;       // even number of digits
            }
        }

        return count;
    }
};
