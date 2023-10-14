
#include <iostream>
#include "linkedList.h"

int main()
{
    linkedList list;

    std::cout << "Empty:" << list.isEmpty() << "\n";
    list.insert(5);

    list.insert(2);
    list.insert(3);

    list.print();
    std::cout << "\n" << list.first();
    std::cout << "\n" << list.last();
} 

