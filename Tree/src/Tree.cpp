#include "Tree.h"
Tree::Tree()
{
    root=NULL;
    lenght=0;

}
Tree::~Tree()
{
    //dtor
}
void Tree::insert(int element)
{
    Node*newNode=new Node;
    newNode->item=element;//5
    newNode->lift=newNode->right=NULL;
    if(lenght==0)
    {
        root=newNode;

    }
    else
    {
        Node*current=root;
        Node*prevece;
        while(current!=NULL)
        {
            prevece=current;
            if(element<=current->item)//40
                current=current->lift;
            else
                current=current->right;
        }
        if(element<=prevece->item)
        {
            prevece->lift=newNode;
        }
        else
        {
            prevece->right=newNode;
        }

    }
    lenght++;
}
bool Tree::search(int element)
{
    Node*current=root;
    if(lenght==0)
    {
        cout<<"The Tree is Empty"<<endl;
    }
    else
    {
        while(current!=NULL)
        {
            if(element==current->item)
            {
                return true;
            }
            else if(element<=current->item)
            {
                current=current->lift;
            }
            else
            {
                current=current->right;
            }
        }
        return false;

    }
}
void Tree::preOrder(Node*n)//root lift right
{
    if(n!=NULL)
    {
        cout<<n->item<<" ";
        preOrder(n->lift);
        preOrder(n->right);

    }
}
void Tree::printPreOrder()
{
    preOrder(root);
}
void Tree::inOrder(Node*n)// lift root right
{
    if(n!=NULL)
    {
        preOrder(n->lift);
        cout<<n->item<<" ";
        preOrder(n->right);

    }
}
void Tree::printInOrder()
{
    inOrder(root);
}


void Tree::postOrder(Node*n)// lift right root
{
    if(n!=NULL)
    {

        preOrder(n->lift);
        preOrder(n->right);
        cout<<n->item<<" ";

    }
}
void Tree::printPostOrder()
{
    postOrder(root);
}
void Tree::deleteNode(Node* &nood)
{
    //leaf nood
    if(nood->lift==NULL&&nood->right==NULL)
    {
        delete nood;
        nood=NULL;
    }
    //one children
    else if(nood->lift==NULL)
    {
        Node*current=nood;
        nood=nood->right;
        delete current;
    }
    else if(nood->right==NULL)
    {
        Node*current=nood;
        nood=nood->lift;
        delete current;
    }
    else
    {
        Node*current=nood->lift;
        Node*prevece=NULL;
        while(current->right!=NULL)
        {
            prevece=current;
            current=current->right;
        }
        nood->item=current->item;
        if(prevece==NULL)
        {
            nood->lift=current->lift;
        }
        else
        {
            prevece->right=current->lift;
            //current=current->lift;
        }
        delete current;
    }

}
void Tree::remove(int element)
{
    if(root==NULL)
    {
        cout<<"The Tree is Empty Can`t Remove Element"<<endl;
    }
    else if(element==root->item)
    {
        deleteNode(root);
    }
    else
    {
        Node*current=root;
        if(element<=root->item)
        {
            current=current->lift;
        }
        else
        {
            current=current->right;
        }
        Node*prevece=root;
        while(current!=NULL)
        {
            if(element==current->item)//16
            {
                break;
            }
            prevece=current;
            if(element<=current->item)
            {
                current=current->lift;
            }
            else
            {
                current=current->right;
            }
        }
        if(current==NULL)
        {
            cout<<"The Element Not Founded"<<endl;
        }
        else if(element<=prevece->item)
        {
            deleteNode(prevece->lift);
        }
        else
        {
            deleteNode(prevece->right);
        }


    }
}
