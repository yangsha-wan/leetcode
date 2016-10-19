//
// Created by baidu on 17/10/2016.
//

#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        using std::stack;
        using std::vector;
        vector<int> result;
        stack<TreeNode *> aStack;
        TreeNode * pointer = root;
        while (!aStack.empty() || pointer){
            if (pointer) {
                aStack.push(pointer);
                pointer = pointer -> left;
            }
            else {
                pointer = aStack.top();
                aStack.pop();
                result.push_back(pointer -> val);
                pointer = pointer->right;
            }
        }
        return result;
    }
};