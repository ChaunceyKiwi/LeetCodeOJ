#include <iostream>
using namespace std;

// Judge if a character is a vowel
bool isVowels(char target){
  if(target == 'a' || target == 'e' || target == 'i' || target == 'o' || target == 'u')
      return true;
  else if(target == 'A' || target == 'E' || target == 'I' || target == 'O' || target == 'U')
      return true;
  else
      return false;
}

class Solution {
public:
    string reverseVowels(string s) {

      int count(0);
      int temp(0);
      string result = s;

      // Count how many vowels there are
      for (int i = 0;i < s.length();i++){
          if(isVowels(s[i])){
              count++;
          }
      }

      int index[count];
      int newIndex[count];

      // Record the index of vowel characters
      for (int i = 0;i < s.length();i++){
          if(isVowels(s[i])){
              index[temp++] = i;
          }
      }

      // Reverse the index of vowel characters
      for(int i = 0;i < count;i++){
        newIndex[i] = index[count - 1 - i];
      }

      // Update the string with vowels reversed
      temp = 0;
      for (int i = 0;i < s.length();i++){
          if(isVowels(s[i]) == 0){
              result[i] = s[i];
          }else{
              result[i] = s[newIndex[temp++]];
          }
      }

      return result;
    }
};

int main(void)
{
    string a("leetcode");
    Solution solution;
    string a_so = solution.reverseVowels(a);
    cout<<a_so<<endl;
}
