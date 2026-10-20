# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

        if root is None:
            return []
        queue = deque([root])
        ret = []
        
        # queue only holds whats waiting to be provessed
        while queue: # processes the whole tree

            level_size = len(queue)
            lvl = []
            for i in range(level_size): # processes one level at a time
                node = queue.popleft()

                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

                lvl.append(node.val)

            ret.append(lvl)

        return ret
            

        