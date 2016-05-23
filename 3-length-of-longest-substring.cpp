#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int length = 1;
        int ifRepeat = 0;

        for(int i = 0;i < s.length() - 1; i++){
          for(int j = i + 1;j < s.length(); j++){
            length = 1;
            ifRepeat = 0;

            for(int k = i; k < j; k++)
              if(s[k] != s[j]){
                length++;
                break;
              }

            if(length > max)
              max = length;
          }
        }

        return max+1;
    }
};

int main(void)
{
    string input("bbbbb");
    Solution solution;
    cout<<solution.lengthOfLongestSubstring(input)<<endl;

}
