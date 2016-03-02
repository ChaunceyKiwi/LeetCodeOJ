#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp;
        while(n >= 0){
            if(n == 1)
                return true;
            else if(n == 0)
                return false;
            else{
                if(n % 2 != 0)
                  return false;
                else
                  n = n >> 1;
            }
        }
      return false;
    }
};

int main(void)
{
  Solution so;
  cout<<so.isPowerOfThree(256)<<endl;
  return 0;
}
