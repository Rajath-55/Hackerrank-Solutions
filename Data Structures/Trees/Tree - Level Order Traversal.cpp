#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

    int getheight(Node* root) {
        if(root == NULL){
          return -1;
        }
        else{
          return (max(getheight(root->left), getheight(root->right)) + 1);
        }
    }

    void printGivenLevel(Node* root,int level){
        if(root == NULL){
            return;
        }
        if(level == 1){
            cout << root->data << " ";
        }
        else if(level > 1){
            printGivenLevel(root->left, level - 1);
            printGivenLevel(root->right,level - 1);
        }
    }

    void levelOrder(Node* root) {
      for(int i=0; i<=getheight(root); i++){
          printGivenLevel(root, i);
        }
    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

	myTree.levelOrder(root);
    return 0;
}
