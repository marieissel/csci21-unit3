/*
 * Name        : lab_18.cpp
 * Author      : Marie Issel
 * Description : Working with linked lists
 */
#include "sl_list.h" 
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

SLList::SLList() 
{
    head_ = NULL; 
    size_ = 0;
}

SLList::~SLList(void)
{ 
    Clear();
}

void SLList::InsertHead(int newHead)
{
    //creates a new dynamic SLNode with the contents of the parameter and attaches as the new head of the list
    SLNode* node = new SLNode(newHead);
    node->set_next_node(head_);
    head_ = node;
    size_++;
}

void SLList::RemoveHead()
{
    //removes the head node from the list, or does nothing if the list is empty
    if(head_ != NULL)
    {
        if(head_->next_node() != NULL)
        {
            SLNode *tmp = head_->next_node();
            delete head_;
            head_ = tmp;
        }
        else 
        {
            delete head_; 
            head_ = NULL;
        }
        size_--;
    }
}

void SLList::Clear()
{
    //clears the entire contents of the list, freeing all memory associated with all nodes
    if(head_ != NULL)
    {
        while (head_ != NULL)
        {
            if(head_->next_node() != NULL)
            {
                SLNode *tmp = head_->next_node();
                delete head_;
                head_ = tmp;
            }
            else 
            {
                delete head_;
                head_ = NULL;
            }
        }
    }
    size_ = 0;
}

unsigned int SLList::size() const
{
    return size_;
}

string SLList::ToString() const
{
    /* returns a string representation of the contents
    of all nodes in the list, in the format
    NUM1, NUM2, ..., LASTNUM
    returns the empty string on an empty list (i.e. returns "")
    */ 
    SLNode* current = head_;
    std::stringstream ss;
    
    if(current != NULL)
    {
        while (current != NULL)
        {
            ss << current->contents();
            if(current->next_node() != NULL)
            {
                ss << ", ";
            }
            current = current->next_node();
        }
    }
    return ss.str();
}