#pragma once
#include <iostream>
#include "node.h"
#include <sstream>


template <class T> class linkedList
{
   public:
     linkedList()
     {
        this->head = nullptr;
        this->tail = nullptr;
        this->lenght = 0;
     }

     linkedList& insert(const T& data)
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

     void print() const
     {
        std::ostringstream os;
        node<T> *current = this->head;
        os << this->head << "-> ";
        os << "Lenght: " << this->lenght << " [" << "\n";
        while (current != nullptr)
        {
          os << current->data << "-> " << current->link << "\n";
          current = current->link;
        }
        os << "]" << "\n";
        std::cout << os.str() << "\n";
     }

     ~linkedList()
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

   private:
     node<T> *head;
     node<T> *tail;
     int lenght;
};

 