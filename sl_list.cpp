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
    tail_ = NULL; 
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
    if (tail_ == NULL) {
        tail_ = node;
    }
}

void SLList::InsertTail(int newTail)
{
    SLNode* node = new SLNode(newTail);
    if (head_ == NULL) {
        // list is empty
        head_ = node;
        tail_ = node;
        size_ = 1;
    } else {
        // list has at least 1 item
        tail_->set_next_node(node);
        tail_ = node;
        size_++;
    }
}

void SLList::RemoveHead()
{
    //removes the head node from the list, or does nothing if the list is empty
    if(head_ != NULL)
    {
        // list is not empty
        if (head_ == tail_) 
        {
            // list only has 1 item in it, clear the list
            delete head_;
            head_ = NULL;
            tail_ = NULL;
            size_ = 0;
            return;
        } 
        else 
        {
            // list has multiple items
            SLNode *tmp = head_->next_node();
            delete head_;
            head_ = tmp;
            size_--;
            return;
        }
    }
}

void SLList::RemoveTail()
{
    //removes the tail node from the list, or does nothing if the list is empty
    SLNode *tmp = head_;
    if(tmp != NULL)
    {
        // list is not empty
        if (head_ == tail_)
        {
            // list only has 1 item in it, clear the list
            delete head_;
            head_ = NULL;
            tail_ = NULL;
            size_ = 0;
            return;
        }
        while(tmp->next_node() != tail_)
        {
            // find the item just before the tail
            tmp = tmp->next_node();
        }
        // delete the old tail
        delete tail_;
        // this will be the new end of the list
        tmp->set_next_node(NULL);
        tail_ = tmp;
        size_--;
        return;
    }
}

void SLList::Clear()
{
    //clears the entire contents of the list, freeing all memory associated with all nodes
    if(head_ != NULL)
    {
        // list is not empty
        while (head_ != NULL)
        {
            RemoveHead();
        }
    }
}

int SLList::GetHead() const
{
    //  -- Returns the contents of the head node (The node head_ is pointing to) Returns 0 if the list is empty
    if(head_ != NULL)
    {
        return head_->contents(); 
    }
    else return 0;
    
}

int SLList::GetTail() const
{
    // -- Returns the contents of the tail node (The node tail_ is pointing to) Returns 0 if the list is empty
     if(tail_ != NULL)
    {
        return tail_->contents(); 
    }
    else return 0;
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
