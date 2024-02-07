#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H


class doubleLinkedList
{
private:
    struct Node
    {
        int item;
        Node*prevece;
        Node*next;
    };
    int length;
    Node*lift;
    Node*right;
public:
    doubleLinkedList();
    void sort();
    void reverse();
    int search(int element);
    void search2(int element);
    void removeAtPosition(int position);
    void removeLift();
    void removeRight();
    void insertAtPosition2(int position,int element);
    void insertAtPosition(int position,int element);
    void insertRight(int element);
    void insertLift(int element);
    void print();
};

#endif // DOUBLELINKEDLIST_H
