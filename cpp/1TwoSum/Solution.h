//
// Created by baidu on 15/10/2016.
//

#ifndef _1_CPP_SOLUTION_H
#define _1_CPP_SOLUTION_H

#include <vector>
using namespace std;

namespace _1 {
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> result;
        for (int i = 0; i < numbers.size() - 1; i++)
            for (int j = i + 1; j <= numbers.size(); j++)
                if (numbers[i] + numbers[j] == target){
                    result.push_back(i + 1);
                    result.push_back(j + 1);
                    return result;
                }
        return result;
    }
};
}


#endif //_1_CPP_SOLUTION_H
