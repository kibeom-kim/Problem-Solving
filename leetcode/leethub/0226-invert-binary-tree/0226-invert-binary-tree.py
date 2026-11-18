# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: TreeNode | None) -> TreeNode | None:
        
        def dfs(root):
            if not root:
                return None
            
            temp_node = root.left
            root.left = root.right
            root.right = temp_node

            dfs(root.left)
            dfs(root.right)
        
            return root
        
        return dfs(root)
