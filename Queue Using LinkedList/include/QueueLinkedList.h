#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H


class QueueLinkedList
{
private:
    struct Node
    {
        int item;
        Node*next;
    };
    Node*front,*rear;
    int length;
public:
    void enQueue(int element);
    void deQueue();
    bool isEmpty();
    bool isFull();
    int getSize();
    int getFront();
    int getRear();
    void print();
    void clear();
    QueueLinkedList();
    virtual ~QueueLinkedList();



};

#endif // QUEUELINKEDLIST_H
