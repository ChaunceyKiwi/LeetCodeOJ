#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        int temp;
        while(n >= 0){
            if(n == 1)
                return true;
            else if(n == 0)
                return false;
            else{
                if(n % 3 != 0)
                  return false;
                else
                  n = n / 3;
            }
        }
      return false;
    }
};

int main(void)
{
  Solution so;
  cout<<so.isPowerOfThree(243)<<endl;
  return 0;
}
