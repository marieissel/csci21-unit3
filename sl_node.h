/*
 * Name        : lab_17.h
 * Author      : Marie Issel
 * Description : Header File for Lab #17
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

class SLNode {
    
    public:
      SLNode(int contents);
      SLNode();
      ~SLNode(void);
      
      int contents() const;
      SLNode* next_node() const;
      
      void set_contents(int contents);
      void set_next_node(SLNode* next_node);
      

    private:
      int contents_;
      SLNode* next_node_;
        
        
};

#endif