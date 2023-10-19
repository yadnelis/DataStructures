#pragma once
#include <iostream>
#include "node.h"

class linkedList
{
  friend std::ostream& operator<<(std::ostream&, const linkedList&);

   public:
     linkedList();

     linkedList& insert(const int&);
     // Inserts an element at the begining of the list 

     linkedList& remove(const int&);

     int first() const;

     int last() const;

     bool isEmpty() const;

     linkedList& operator+=(const int&);

     ~linkedList();

   private:
     node<int> *head;
     int lenght;
};

 