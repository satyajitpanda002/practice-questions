// https://binarysearch.com/room/nullptr-dereference-ukTjnKttKd

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if(root!=0)
    {
        Tree *t=new Tree;
        t->left=root->left;
        root->left=root->right;
        root->right=t->left;
    solve(root->left);
    solve(root->right);
    }
    return root;
}
