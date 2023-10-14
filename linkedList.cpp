#include <iostream>
#include "linkedList.h"

linkedList::linkedList()
{
   this->head = nullptr;
   this->lenght = 0;
}

linkedList linkedList::insert(const int& data)
{
   node *current = nullptr;
   current = new node();
   current->data = data;
   current->link = this->head; 
   this->head = current;
   this->lenght++;
   return *this;
}

void linkedList::print() const 
{
   node *current = this->head;
   
   while (current != nullptr)
   {
      std::cout << current->data;
      current = current->link;
   }
}

int linkedList::first() const 
{
  return head->data; 
}

int linkedList::last() const 
{
   node* current = this->head;
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
