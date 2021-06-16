#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
#define info(P) P->info
#define right(P) P->right
#define left(P) P->left
using namespace std;

typedef int infotype;
typedef struct Node *address;
struct Node{
    infotype info;
    address right;
    address left;
};

typedef address binTree;
struct{
    binTree root;
};

address allocation(infotype X);
void insertBST(address &root, address N);
void inOrder(address root);
address findNode(address root, infotype X);
int countInternalNode(address root);
void printLeaves(address root);
int countLeaves(address rootl);

#endif // TREE_H_INCLUDED
