class Solution {
public:
    bool isAnagram(string s, string t) {
      int binA[26];
      int binB[26];

      for(int i = 0; i < s.length();i++)
        binA[string[i]-97]++;

      for(int i = 0; i < s.length();i++)
        binB[string[i]-97]++;

      for(int i = 0; i < 26;i++){
        if(binA[i] != binB[i])
          return false;
      }

      return true;

    }
};
