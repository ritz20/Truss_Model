#include "node.h"




int main()
{
    Force f1({2, 4, 5}, 3);
    f1.print();
    std::cout << norm(f1.direction());
    Force f2({-3, 4, -6}, 4);
    f2.print();
    Force f3 = f1+f2;
    f3.print();


    return 0;
}



