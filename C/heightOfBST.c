/*********************************** Algorithm ********************
 * Calculate height of the right and left side of the try 
 * Height = longest path from root to leaf node 
 * 
 * height = max(left,right) + 1
 * ******** Recursive Call *************
 * height of left = findHeight(root->left)
 * height of right = findHeight(root->right)
 * 
 * Height of tree = max(leftHeight, rightHeight) + 1
 * 
 * ****************************************************************/