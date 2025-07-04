class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> count (1001,0);
        for(int i=0; i<arr1.size(); i++){
            count [arr1[i]]++;
        }

        vector<int> result;
        for(int i=0; i<arr2.size(); i++){
            while (count[arr2[i]] >0){
                result.push_back (arr2[i]);
                count [arr2[i]]--;
            }
        }

            for(int i=0; i<1001; i++){
                while (count[i] >0){
                    result.push_back(i);
                    count [i]--;
                }
            }
            return result;
        }
    
};