class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {

       int freq[26] = {0};
       for(int i=0;i<word1.length(); i++){
        char c= word1[i];
        int index = c -'a';
        freq[index]++;
       } 
       for(int i=0;i<word2.length(); i++){
        char c= word2[i];
        int index = c -'a';
        freq[index] --;
    }

    for(int i=0; i<26; i++){
        if (abs(freq[i])>3)
        return false;
    }

    return true;
    }
};