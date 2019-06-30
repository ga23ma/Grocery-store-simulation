
#include "data.h"

Data::Data(int cn,int st,int tt)
{
    customerNumber=cn;
    serviceTime=st;
    totalTime=tt;
}
int Data::getCustomerNumber()
{
    return customerNumber;
}
int Data::getServiceTime()
{
    return serviceTime;
}
int Data::getTotalTime()
{
    return totalTime;
}
void Data::print()
{
    cout << "Customer Number:" ;
    cout << customerNumber <<endl;
    cout << "Service Time:" ;
    cout << serviceTime<<endl;
    cout << "Total Time:" ;
    cout << totalTime<<endl;
}

