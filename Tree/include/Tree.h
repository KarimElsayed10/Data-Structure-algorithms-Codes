#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;
class Tree
{
private:
    struct Node
    {
        int item;
        Node*lift;
        Node*right;
    };
    Node*root;
    int lenght;
public:
    void preOrder(Node*n);
    void printPreOrder();
    void inOrder(Node*n);
    void printInOrder();
    void postOrder(Node*n);
    void printPostOrder();
    void insert(int element);
    bool search(int element);
     void deleteNode(Node * &nood);
     void remove(int element);
    Tree();
    virtual ~Tree();



};

#endif // TREE_H
