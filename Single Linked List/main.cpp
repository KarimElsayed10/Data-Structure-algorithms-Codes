#include <bits/stdc++.h>
#include <LinkedList.h>
#include <iostream>
using namespace std;
int main()
{
    LinkedList linked;
    linked.insertLift(4);
    linked.insertRight(56);
    linked.insertAtPosition(1,12);
    linked.insertLift(78);
    linked.insertRight(66);
    linked.insertAtPosition(1,36);
    linked.insertLift(2);
    linked.insertRight(85);
    linked.insertAtPosition(1,32);
    linked.insertLift(95);
    linked.insertLift(59);
    linked.print();
    linked.removeAtPosition(4);
    linked.removeLift();
    linked.removeRight();
    linked.print();
    linked.reverse();
    linked.print();
    return 0;
}










