#include <iostream>
#include "linkedList.h"

std::ostream& operator<<(std::ostream &os, const linkedList &list)
{
   node<int> *current = list.head;
   os << list.head << "-> ";
   os << "Lenght: " << list.lenght << " [" << "\n";
   while (current != nullptr)
   {
      os << current->data << "-> " << current->link << "\n";
      current = current->link;
   }
   os << "]" << "\n";
   return os;
}

linkedList::linkedList()
{
   this->head = nullptr;
   this->lenght = 0;
}

linkedList& linkedList::insert(const int& data)
{
   node<int> *current = nullptr;
   current = new node<int>;
   current->data = data;
   current->link = this->head;
   this->head = current;
   this->lenght++;
   return *this;
}

linkedList& linkedList::remove(const int& data)
{
   node<int> *current = this->head;
   node<int> *pre = nullptr;
   node<int> *post = nullptr;

   int x = 0;
   while (current != nullptr)
   {
      if (current->data == data)
      {
         pre->link = current->link;
         delete current;
         current = pre->link;
      }
      else
      {
        pre = current;
        current = current->link;
      }
   }
   x++;
   return *this;
}

int linkedList::first() const
{
   return head->data;
}

int linkedList::last() const
{
   node<int> *current = this->head;
   while (current->link != nullptr)
   {
      current = current->link;
   }
   return (current->data);
}

bool linkedList::isEmpty() const
{
   return head == nullptr;
}


linkedList::~linkedList()
{
   node<int> *current = this->head;
   node<int> *post = nullptr;

   while (current != nullptr)
   {
      post = current->link;
      delete current;
      current = nullptr;
      current = post;
   }
}
