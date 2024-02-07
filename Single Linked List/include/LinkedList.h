#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList
{
private:
    struct Node
    {
        int item;
        Node*next;
    };
    Node*lift;
    Node*right;
    int lenght;
public:
    LinkedList();
    ~LinkedList();
    void removeLift();
    void removeRight();
    void removeAtPosition(int position);
    void insertCirculuer(int element);
    void reverse();
    int search(int element);
    void insertLift(int element);
    void insertRight(int element);
    void insertAtPosition(int position,int element);

    void print();
};

#endif // LINKEDLIST_H
