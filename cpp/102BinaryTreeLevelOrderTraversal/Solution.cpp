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
    vector<vector<int>> levelOrder(TreeNode *root) {
        using std::queue;
        queue<TreeNode *> aQueue;
        TreeNode *pointer = root;
        TreeNode *flag = NULL;

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
                result.push_back(currentLevel);
                currentLevel.clear();
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
