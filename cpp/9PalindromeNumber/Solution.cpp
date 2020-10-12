//
// Created by baidu on 17/10/2016.
//

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int div = 1;
        while (x / div >= 10)
            div = div * 10;
        while (x >= 10) {
            if (x / div != x % 10) return false;
            x = x % div / 10;
            div = div / 100;
        }
        if (div > 1 && x != 0) return false;
        return true;
    }
};