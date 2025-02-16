#include <iostream>
using namespace std;

// Definition of a BST node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val); // Create a new node if the tree is empty
    }

    if (val < root->data) {
        root->left = insert(root->left, val); // Insert into the left subtree
    } else {
        root->right = insert(root->right, val); // Insert into the right subtree
    }

    return root;
}

// Function to search for a key in the BST non-recursively
bool searchNonRecursive(TreeNode* root, int key) {
    while (root != nullptr) {
        if (key == root->data) {
            return true; // Key found
        } else if (key < root->data) {
            root = root->left; // Move to the left subtree
        } else {
            root = root->right; // Move to the right subtree
        }
    }
    return false; // Key not found
}

// Function to search for a key in the BST recursively
bool searchRecursive(TreeNode* root, int key) {
    if (root == nullptr) {
        return false; // Key not found
    }

    if (key == root->data) {
        return true; // Key found
    } else if (key < root->data) {
        return searchRecursive(root->left, key); // Search in the left subtree
    } else {
        return searchRecursive(root->right, key); // Search in the right subtree
    }
}

// Function to display the BST (in-order traversal)
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    // Create a BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display the BST (in-order traversal)
    cout << "In-order traversal of the BST: ";
    inOrderTraversal(root);
    cout << endl;

    // Search for a key non-recursively
    int key1 = 90;
    if (searchNonRecursive(root, key1)) {
        cout << "Key " << key1 << " found (non-recursive search)." << endl;
    } else {
        cout << "Key " << key1 << " not found (non-recursive search)." << endl;
    }

    // Search for a key recursively
    int key2 = 10;
    if (searchRecursive(root, key2)) {
        cout << "Key " << key2 << " found (recursive search)." << endl;
    } else {
        cout << "Key " << key2 << " not found (recursive search)." << endl;
    }

    return 0;
}