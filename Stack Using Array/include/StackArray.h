#ifndef STACKARRAY_H
#define STACKARRAY_H


class StackArray
{
private:
    int *arr;
    int size;
    int top;
public:
    bool isFull();
    bool isEmpty();
    void push(int element);
    void pop();
    int getTop();
    void getTop1();
    void print();
    StackArray(int size);
    virtual ~StackArray();



};

#endif // STACKARRAY_H
