class Solution:
    #Function to return the level order traversal of a tree.
    def levelOrder(self,root ):
        # Code here
        queue=[]
        queue.append(root)
        
        while len(queue)>0: 
            n=queue.pop()
            print(n)
            if n.left: 
                queue.append(n.left)
            if n.right: 
                queue.append(n.right)
            
