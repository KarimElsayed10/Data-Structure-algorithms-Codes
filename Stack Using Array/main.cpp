#include <bits/stdc++.h>
#include <StackArray.h>
#include <iostream>
using namespace std;
int main()
{
    StackArray stackArr(8);
    stackArr.push(4);
    stackArr.push(9);
    stackArr.push(7);
    stackArr.push(2);
    stackArr.push(95);
    stackArr.push(6);
    stackArr.push(36);
    stackArr.push(5);
    stackArr.print();
    stackArr.pop();
    stackArr.getTop1();

    return 0;
}










