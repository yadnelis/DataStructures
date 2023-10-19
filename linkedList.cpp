#include <iostream>
#include "linkedList.h"
#include <string>
#include <sstream>

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
   this->tail = nullptr;
   this->lenght = 0;
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

linkedList& linkedList::insert(const int& data)
{
   node<int> *current = nullptr;
   if (this->tail == nullptr) this->tail = this->head;
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

   //Iterate trough the list until you find the element.
   //There is no need to keep iterating trough the list once the element is found. 
   while(current != nullptr && current->data != data)
   {
      pre = current;
      current = current->link;
   }
   if(current == nullptr) 
   {
      // If current is null it means no such element exists
      std::ostringstream oss;
      oss << "An element with the value of \"" << data << "\" does not exist.";
      throw std::invalid_argument(oss.str());
   }
   else if(pre == nullptr) 
   {
      //If pre is null, the element we want to delete is the first element
      this->head = current->link;
   }
   else if (current->link == nullptr)
   {
      //If current's link is a the last element, let's update the class
      this->tail = pre;
      pre->link = nullptr;
   }
   else
   {
      pre->link = current->link;
   }

   delete current;
   this->lenght--;
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
   return this->tail->data;
   return (current->data);
}
 
bool linkedList::isEmpty() const
{
   return head == nullptr;
}

bool linkedList::contains(const int &data) const 
{
   node<int> *current = this->head;
   while (current != nullptr)
   {
      if (data == current->data)
         return true;
      current = current->link;
   }
   return false;
}



