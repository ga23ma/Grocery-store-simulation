#include"queuenode.h"

QueueNode::QueueNode(int cn,int st,int tt)
{
   data=new Data(cn,st,tt);
   next=0;
}
QueueNode::~QueueNode()
{
    free(data);
}
Data * QueueNode::getData()
{
    return data;
}
QueueNode* QueueNode::getNext()
{
    return next;
}
void QueueNode::setData(Data * d)
{
    data=d;
}
void QueueNode::setNext(QueueNode *n)
{
    next= n;
}
void QueueNode::print()
{
    data->print();
}
