/*
 * Name        : lab_17.cpp
 * Author      : Marie Issel
 * Description : Working with pointers and nodes
 */
#include "sl_node.h"

SLNode::SLNode() 
{
    next_node_ = NULL; 
    contents_ = 0;
}

SLNode::SLNode(int contents)
{
    next_node_ = NULL; 
    contents_ = contents;
}

SLNode::~SLNode(void)
{ }

int SLNode::contents() const
{
    return contents_;
}

SLNode* SLNode::next_node() const
{
    return next_node_;
}

void SLNode::set_contents(int contents)
{
    contents_ = contents;
}

void SLNode::set_next_node(SLNode* next_node)
{
    next_node_ = next_node; 
}