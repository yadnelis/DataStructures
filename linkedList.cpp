/*#include <iostream>
#include <string>
#include <sstream>

template <class T>
std::ostream& operator<<(std::ostream &os, const linkedList<T> &list)
{
   node<T> *current = list.head;
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

template <class T>
linkedList<T>::linkedList()
{
   this->head = nullptr;
   this->tail = nullptr;
   this->lenght = 0;
}
template <class T>
linkedList<T>::~linkedList()
{
   node<T> *current = this->head;
   node<T> *post = nullptr;

   while (current != nullptr)
   {
      post = current->link;
      delete current;
      current = nullptr;
      current = post;
   }
}
template <class T>
linkedList<T>& linkedList<T>::insert(const T& data)
{
   node<T> *current = nullptr;
   if (this->tail == nullptr) this->tail = this->head;
   current = new node<T>;
   current->data = data;
   current->link = this->head;
   this->head = current;
   this->lenght++;
   return *this;
}

template <class T>
linkedList<T>& linkedList<T>::remove(const T& data)
{
   node<T> *current = this->head;
   node<T> *pre = nullptr;

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
template <class T>
T linkedList<T>::first() const
{
   return head->data;
}

template <class T>
T linkedList<T>::last() const
{
   node<T> *current = this->head;
   while (current->link != nullptr)
   {
      current = current->link;
   }
   return this->tail->data;
   return (current->data);
}
 template <class T>
bool linkedList<T>::isEmpty() const
{
   return head == nullptr;
}
template <class T>
bool linkedList<T>::contains(const T &data) const 
{
   node<T> *current = this->head;
   while (current != nullptr)
   {
      if (data == current->data)
         return true;
      current = current->link;
   }
   return false;
}



*/