#include <iostream>

// Definition of a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform pre-order traversal
void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    // Visit the root node
    std::cout << root->data << " ";

    // Traverse the left subtree
    preOrderTraversal(root->left);

    // Traverse the right subtree
    preOrderTraversal(root->right);
}

int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Performing pre-order traversal
    std::cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    std::cout << std::endl;

    // Clean up memory (optional, but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}