#pragma once
#include "node.h"

class linkedList
{
   public:
     linkedList();

     linkedList insert(const int&);
     // Inserts an element at the begining of the list
     
     linkedList remove(const int& data);
     void print() const;
     int first() const;
     int last() const;
     bool isEmpty() const;
     

     linkedList operator+=(const int&);

   private:
     node *head;
     int lenght;
};

 