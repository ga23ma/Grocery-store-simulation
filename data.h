#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
using namespace std;
class Data

{

public:

    Data(int cn,int st,int tt);
    int getCustomerNumber();
    int getServiceTime();
    int getTotalTime();
    void print();



private:

    int customerNumber; // Unique identifier; starts at 1; after 24 hours should be reset to 1
    int serviceTime;   // Random time; varies between express and normal lanes; units in minutes
    int totalTime;     // totalTime = serviceTime + sum of serviceTimes of customers in line before this customer; units in minutes

};


#endif // DATA_H_INCLUDED
