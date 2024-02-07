#ifndef ARRAY_H
#define ARRAY_H
class Array
{
private:
    int lenght;
    int *arr;
    int size;
public:
    void reSize(int newSize);
    void removeAtPosition(int position);
    void removeLast();
    void insertAtPosition(int position,int element);
    bool isEmpty();
    bool isFull();
    void print();
    void sort();//selection sort
    void insertLast(int element);
    Array(int size);
    Array();
    ~Array();
};

#endif // ARRAY_H
