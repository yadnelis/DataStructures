
#include <iostream>
#include "linkedList.h"

int main()
{
    node<std::string> m;
    m.data = "hello";
    m.link = nullptr;
    std::cout << "This is a node of type string"<< "\n";
    std::cout << "data: " << m.data << " , points to: " << m.link << "\n";

    linkedList list;

    std::cout << "Empty:" << list.isEmpty() << "\n";
    list.insert(5);
    list.insert(6);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    std::cout << list;
    std::cout << "\n";
    std::cout << "First: " << list.first() << "\n";
    std::cout << "Last:" << list.last() << "\n";

    list.remove(5);
    std::cout << list << "\n";
    std::cout << list.contains(5) << "\n";
    std::cout << list.contains(2) << "\n";

    return 0;
} 

