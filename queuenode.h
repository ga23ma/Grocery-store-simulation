#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>
#include"data.h"
#include"data.cpp"

using namespace std;
class QueueNode
{
private:
    Data* data;
    QueueNode * next;
public:
    QueueNode(int cn,int st,int tt);
    ~QueueNode();
    Data * getData();
    QueueNode *getNext();
    void setData(Data * d);
    void setNext(QueueNode *n);
    void print();
};

#endif // NODE_H_INCLUDED
