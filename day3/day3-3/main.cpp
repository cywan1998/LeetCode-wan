#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        while(num != 0)
        {
            if(num%2 == 0)
                num /= 2;
            else if(num%3 == 0)
                num /= 3;
            else if(num%5 == 0)
                num /= 5;
            else
                return false;
        }
        return true;
    }
};