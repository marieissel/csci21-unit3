/*
 * Name        : lab_18.h
 * Author      : Marie Issel
 * Description : Header File for Lab #18
 */

#ifndef LAB_Z
#define LAB_Z

#include "sl_node.h"

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

class SLList 
{
    
    public: 
        SLList();
        ~SLList(void);
        void InsertHead(int newHead);
        void InsertTail(int newTail);
        void RemoveHead();
        void RemoveTail();
        void Clear();
        unsigned int size() const;
        string ToString() const;
        int GetHead() const;
        int GetTail() const;
    
    private:
        SLNode* head_; //points to the first node in a singly-linked list
        SLNode* tail_; //points to the last node in a singly-linked list
        unsigned int size_; //stores the count of the number of nodes in the list
};
#endif