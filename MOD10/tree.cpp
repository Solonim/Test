#include "tree.h"
#include <iostream>
using namespace std;

address allocation(infotype X){
    X = new Node;
    X.info = X;
    X.left = NULL;
    X.right = NULL;
    return X;
}

void insertBST(address &root, address N){
    if (N = NULL) {
        N = allocation(root);
    } else {
        if (N.info > root){
            insertBST(root, N->left);
        } else if (N->info < root) {
            insertBST(root, N->right);
        } else {
            cout << "duplicate" << endl;
        }

    }
}

void inOrder(address root){
    if (root != NULL){
        inOrder(root->left);
        cout << root->info << endl;
        inOrder(root->right);
    } else {
        cout << "Tree Kosong" << endl;
    }
}

address findNode(address root, infotype X){
    if (root->info = X || root = NULL){
        return root;
    } else {
        if (root->info > X){
            findNode(root->left, X);
        } else if (root->info < X){
            findNode(root->right, X);
        } else {
            return NULL;
        }
    }
}

int countInternalNode(address root){

}

void printLeaves(address root){
    if (root != NULL){
        inOrder(root->left);
        cout << root->info << endl;
        inOrder(root->right);
    } else {
        cout << "Tree Kosong";
    }
}


