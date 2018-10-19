/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/*
bool isSymmetric(struct TreeNode* root) {
    struct TreeNode *p;
    struct TreeNode *queue = NULL;
    bool flag = false;
    int layer = 0;
    int count = 0;
    int i = 0;
    
    queue = enqueue(queue, root, ++count);
    
    while ( (p = dequeue(queue, &count)) != NULL ) {
        layer++;
        i += laye
        if (p->left && p->right) {
            enqueue(p->left, queue, cnt);
            cnt++;
            enqueue(p->right, queue, cnt);
            cnt++;
        }
        
        if (cnt == (2^layer)) {
            layer++;
        } else {
            flag = false;
        }      
       
    }
    
    
}

void *init_queue() {
    
}

struct TreeNode *dequeue(struct TreeNode **queue, int *cntp) {
    struct TreeNode *ret = NULL;
    
    if ( sizeof(queue) > 0 ) {
        *cntp = (sizeof(queue) / sizeof(struct TreeNode *)) - 1;
        ret = queue[0];
        queue = memcpy(queue, queue+1, *cntp)
    }
    
    return ret;
}

void enqueue(struct TreeNode **queue, struct TreeNode *elm, int cnt){
    if (cnt > 0) {
         queue = (struct TreeNode **)realloc(cnt * sizeof(struct TreeNode *));
         queue[cnt-1] = elm;
    }
}
*/

/*
void generate_arr(struct TreeNode *root, int *cntp);
bool is_reverse(int cnt);
int *arr = NULL;

bool isSymmetric(struct TreeNode* root) {
    struct TreeNode **arr = NULL;
    int cnt = 0;
    generate_arr(root, &cnt);
    printf("cnt:%d\n", cnt);
    bool flag = false;
    
    printf("%p\n", arr);
    flag = is_reverse(cnt);
    
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

bool is_reverse(int cnt) {
    int i, j;
    bool flag = true;
    
    for (i = 0, j = cnt - 1; i < j ; i++, j--) {
        printf("val:%d\n", arr[i]);
        if (arr[i] != arr[j]) {
            flag = false;
            break;
        }
    }
    
    return flag;
}
*/

