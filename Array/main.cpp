#include <bits/stdc++.h>
#include <Array.h>
#include <iostream>
using namespace std;
int main()
{
    Array arr;
    arr.insertLast(10);
    arr.insertAtPosition(3,50);
    arr.insertAtPosition(2,18);
    arr.insertLast(30);
    arr.insertLast(60);
    arr.insertLast(40);
    arr.insertAtPosition(1,200);
    arr.print();
    arr.sort();
    arr.print();
    return 0;
}










