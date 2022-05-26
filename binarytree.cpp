#include<bits/stdc++.h>
using namespace std;

struct binary_tree{
    int data;
    binary_tree* left;
    binary_tree* right;
    binary_tree(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
class binaryTree{
    public:
    void delete_node(binary_tree a,int val);
    void inorder_traversal(binary_tree a){
        
    }
    void preorder_traversal(binary_tree a){
        
    }
    void postorder_traversal(binary_tree a){
        
    }
    void level_order_traversal(binary_tree a);
    void BFS(binary_tree a,int val);
    void DFS(binary_tree a,int val);
};
int main(){
    binaryTree bt;
    binary_tree root = binary_tree(5);
    root.left = new binary_tree(1);
    root.right = new binary_tree(6);
    root.left->left = new binary_tree(2);
    root.right->left = new binary_tree(7);
    root.right->right = new binary_tree(8);
    root.left->right = new binary_tree(3);
    bt.inorder_traversal(root);
    bt.postorder_traversal(root);
    bt.preorder_traversal(root);
}