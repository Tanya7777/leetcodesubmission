class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int total=0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int left = i+1;
            int right =n-i;

            int tot_subarray=left*right;
            int odd_subarray= (tot_subarray+1)/2;

            total += odd_subarray* arr[i];
            
        }
        return total;
    }
};