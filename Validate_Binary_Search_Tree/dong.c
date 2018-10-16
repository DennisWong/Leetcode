/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/*
bool isValidBST(struct TreeNode *root) {
    
    int prev;
    
    if (root != NULL) {
        prev = root->val;
        isValidBST(root->left);
        if (prev > root->val)
    }

}*/

void generate_arr(struct TreeNode*, int *);
int *arr = NULL;

bool isValidBST(struct TreeNode* root) {
    
    if (root == NULL) 
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return true;
    
    int cnt = 0;
    
    generate_arr(root, &cnt);

    bool flag = true;
    
    int i;
    
   
    
   /* for ( i = 0; i < cnt; i++ ) {
        printf("%3d", arr[i]);
    } */
    
   // printf("\n");
    
    for ( i = 0; i < cnt - 1; i++ ) {
        if (arr[i] >= arr[i+1]) {
            flag = false;
            break;
        }
    } 
    
    return flag;
}


void generate_arr(struct TreeNode* root, int *cnt) {
    if (root != NULL) {
        generate_arr(root->left, cnt);
        (*cnt)++;
        arr = (int *)realloc(arr, sizeof(int) * (*cnt));
        arr[*cnt-1] = root->val;
        
        generate_arr(root->right, cnt);
    }
}
