//
// Created by baidu on 17/10/2016.
//

#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        using std::queue;
        queue<TreeNode *>aQueue,bQueue;
        TreeNode * pointer = root;
        TreeNode * flag = NULL;
        bool zigzag = true;

        vector<int> currentLevel;
        vector<vector<int>> result;

        if (pointer) {
            aQueue.push(pointer);
            aQueue.push(flag);
        }
        while (!aQueue.empty()) {
            pointer = aQueue.front();
            aQueue.pop();
            if (pointer == flag) {
                if (zigzag) {
                    result.push_back(currentLevel);
                } else {
                    vector<int> reversedCurrentLevel;
                    for (int i = currentLevel.size() - 1; i >= 0; i--) {
                        reversedCurrentLevel.push_back(currentLevel[i]);
                    }
                    result.push_back(reversedCurrentLevel);
                }
                currentLevel.clear();
                zigzag = !zigzag;
                if (aQueue.empty()) {
                    return result;
                }
                aQueue.push(flag);
            } else {
                currentLevel.push_back(pointer->val);
                if (pointer->left != NULL) {
                    aQueue.push(pointer->left);
                }
                if (pointer->right != NULL) {
                    aQueue.push(pointer->right);
                }
            }
        }
        return result;
    }
};
