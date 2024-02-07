#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H


class QueueArray
{
    private:
        int *arr;
        int size;
        int length;
        int front,rear;
    public:
       bool isEmpty();
       bool isFull();
       void enQueue(int element);
       void deQueue();
       int getSize();
       int getFront();
       int getRear();
       void sort();//Bubble Sort
       void print();
        QueueArray(int size);
        virtual ~QueueArray();



};

#endif // QUEUEARRAY_H
