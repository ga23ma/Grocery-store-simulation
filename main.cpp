#include <iostream>
#include "queuenode.h"
#include "queuenode.cpp"

using namespace std;

int main()
{
    QueueNode * n = new QueueNode(10,20,30);
    n->print();

    return 0;
}
