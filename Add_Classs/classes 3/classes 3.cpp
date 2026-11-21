#include <iostream>
#include "Distance.h"
using namespace std;
int main()
{
    Distance d1;
    Distance d2(5, 3.5);
    Distance d3 =d1.add_dis(d2);
    
    d3.print();

    Distance d4 = d3;
    d4.print();
    cout<<d4.getcount();
    return 0;
}
