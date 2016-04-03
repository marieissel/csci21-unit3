/*
 * Name        : lab_18.cpp
 * Author      : Marie Issel
 * Description : Working with linked lists
 */
#include "sl_list.h" 

SLList::SLList() 
{
    head_ = NULL; 
    size_ = 0;
}

SLList::~SLList(void)
{ 
    clear();
}

void SLList::InsertHead(int)
{
    //creates a new dynamic SLNode with the contents of the parameter and attaches as the new head of the list
}

void SLList::RemoveHead()
{
    //removes the head node from the list, or does nothing if the list is empty

}

void SLList::Clear()
{
    //clears the entire contents of the list, freeing all memory associated with all nodes

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
}