#include <bits/stdc++.h>
#include <QueueLinkedList.h>
#include <iostream>
using namespace std;
int main()
{
    QueueLinkedList queueLinkedList;
    queueLinkedList.enQueue(4);
    queueLinkedList.enQueue(9);
    queueLinkedList.enQueue(7);
    queueLinkedList.enQueue(2);
    queueLinkedList.enQueue(95);
    queueLinkedList.enQueue(6);
    queueLinkedList.enQueue(36);
    queueLinkedList.enQueue(5);
    queueLinkedList.print();
    queueLinkedList.deQueue();
    cout<<queueLinkedList.getFront()<<endl;
    return 0;
}










