package _94BinaryTreeInorderTraversal;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

/**
 * Created by wanyangsha on 17/10/2016.
 */
public class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        Stack<TreeNode> treeNodeStack = new Stack<>();
        TreeNode currentNode = root;
        while (currentNode != null || !treeNodeStack.empty()) {
            if (currentNode == null) {
                currentNode = treeNodeStack.pop();
                result.add(currentNode.val);
                currentNode = currentNode.right;
            } else {
                treeNodeStack.push(currentNode);
                currentNode = currentNode.left;
            }
        }
        return result;
    }

    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }
}
