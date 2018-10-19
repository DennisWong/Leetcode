class Solution {
    public boolean isSymmetric(TreeNode root) {
        boolean flag = false;
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        if (root == null) {
        	flag = true;
        	return flag;
        } else {
        	queue.offer(root.left);
        	queue.offer(root.right);
        }
    
        System.out.println();
        while (queue.size() > 0) {
        	TreeNode p = queue.poll();
        	TreeNode q = queue.poll();
        	
        	if (p == null && q == null) 
        		continue;
        	
        	if (p.val != q.val)
        		return false;
        	
        	if (p == null ^ q == null)
        		return false;
        	
        	queue.offer(p.left);
        	queue.offer(p.right);
        	queue.offer(p.right);
        	queue.offer(q.left);
        }
        
        return flag;
    }   
    
}


