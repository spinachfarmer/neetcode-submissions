# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:

        # optinal means can be none base case for recursion
        if root is None:
            return None

        # need to check if the children are valid is this asusign balance?
        
        # swap children 
        temp = root.left
        root.left = root.right
        root.right = temp

        # can also write liek 
        #root.left, root.right = root.right, root.left

        self.invertTree(root.left)
        self.invertTree(root.right)

        return root



        