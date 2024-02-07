#include <bits/stdc++.h>
#include <QueueArray.h>
#include <iostream>
using namespace std;
int main()
{
    QueueArray queueArray(8);
    queueArray.enQueue(4);
    queueArray.enQueue(9);
    queueArray.enQueue(7);
    queueArray.enQueue(2);
    queueArray.enQueue(95);
    queueArray.enQueue(6);
    queueArray.enQueue(36);
    queueArray.enQueue(5);
    queueArray.print();
    queueArray.deQueue();
    cout<<queueArray.getFront()<<endl;
    queueArray.sort();
    queueArray.print();

    return 0;
}










