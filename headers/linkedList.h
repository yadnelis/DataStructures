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
     // Deletes the first element which data is equal to the formal parameter data. 

     int first() const;
     // Find the first element in the sequence

     int last() const;
     // find the last element in the sequence

     bool isEmpty() const;
     // If the list doesn't point to anything, return false.

     bool contains(const int&) const;
     // Returns true if an element with that value is found

     linkedList& operator+=(const int&);

     ~linkedList();

   private:
     node<int> *head;
     node<int> *tail;
     int lenght;
};

 