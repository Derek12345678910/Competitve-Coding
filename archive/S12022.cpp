// #include '../comp.h

#if 0

#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node *root;
    Node *left;
    Node *right;
    Node(int v) : value(v), root(nullptr), left(nullptr), right(nullptr) {}
};

vector<Node*> allNodes;
int possible = 0;

void createTree(Node* node) {
    // Base case: if the value is exactly 0, it's a valid solution
    if (node->value == 0) {
        possible++;
        return;
    }

    // If the value becomes negative, this is not a valid path, stop this branch
    if (node->value < 0) {
        return;
    }

    // Create a left child by subtracting 4
    if (node->left == nullptr) {
        node->left = new Node(node->value - 4);
        node->left->root = node;
        createTree(node->left);
    }

    // Create a right child by subtracting 5
    if (node->right == nullptr) {
        node->right = new Node(node->value - 5);
        node->right->root = node;
        createTree(node->right);
    }
}

int question() {
    int input;
    cin >> input;

    // Initialize the root node with the input value
    Node* rootNode = new Node(input);
    allNodes.push_back(rootNode);

    // Recursively build the tree
    createTree(rootNode);

    // Output the number of valid ways to form the number
    cout << possible << endl;

    // Clean up nodes
    for (auto node : allNodes) {
        delete node;
    }
    allNodes.clear();

    return 0;
}

int main1() {
    question();
    return 0;
}


#endif