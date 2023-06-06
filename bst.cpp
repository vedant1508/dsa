#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        left = NULL;
        right = NULL;
    }

    static int minBST(Node* root);
    static int maxBST(Node* root);
    static Node* SearchBST(Node* root,int value);
};

int Node::minBST(Node* root) {
    if (root->left == NULL) {
        return root->data;
    }
    else {
        return minBST(root->left);
    }
}

int Node::maxBST(Node* root) {
    if (root->right == NULL) {
        return root->data;
    }
    else {
        return maxBST(root->right);
    }
}



Node* insertIntoBST(Node* root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }
    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    }
    else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node*& root, int count) {
    cout << "Enter " << count << " numbers to create BST:" << endl;
    for (int i = 0; i < count; i++) {
        int data;
        cin >> data;
        root = insertIntoBST(root, data);
    }
}

Node* Node::SearchBST(Node* root,int value)
{
    if(root==NULL || root->data==value)
        return root;
   
    if (value < root->data)
        return SearchBST(root->left,value);
    else
        return SearchBST(root->right,value);
}

int main() {
    Node* root = NULL;
    int count;
    cout << "How many numbers do you want to insert? ";
    cin >> count;
    takeInput(root, count);
    cout << "Min Value = " << Node::minBST(root) << endl;
    cout << "Max Value = " << Node::maxBST(root) << endl;

    int SearchValue;
    cout<<"Enter the Value to Search=";
    cin>>SearchValue;
    if(Node::SearchBST(root,SearchValue))
    {
        cout<<"Value "<<SearchValue<<" found in the BST."<<endl;
    }
    else{
        cout<<"Value"<<SearchValue<<" Not found in the BST."<<endl;
    }
        

    return 0;
}
