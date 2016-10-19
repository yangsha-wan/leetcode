//
// Created by baidu on 18/10/2016.
//
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int visited[256];
        memset(visited, -1, sizeof(visited));
        int maxLength = 0, curLength = 0, beginIndex = 0;
        for (int i = 0; i < s.length(); i++){
            if (visited[s[i]] < beginIndex){
                curLength++ ;
                if (curLength > maxLength) {
                    maxLength = curLength;
                }
            } else {
                curLength = i - visited[s[i]];
                beginIndex = visited[s[i]];
            }
            visited[s[i]] = i;
        }
        return maxLength;
    }
};