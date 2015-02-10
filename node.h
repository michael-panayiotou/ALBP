/* 
 * File:   node.h
 * Author: dimitriosboglou
 *
 * Created on February 10, 2015, 6:35 PM
 */

#ifndef NODE_H
#define	NODE_H

 
#include <vector>
#include <string>
#include <iostream>

#ifdef	__cplusplus
extern "C" {
#endif
class node{

 private:
    int weight;
    bool done;
    std::string name;  
 public:
    std::vector<node*> inNodes; 
    std::vector<node*> outNodes; 
    
    node();
    node(int,std::string);
    int getValue();
    void setValue(int);
    std::string getName();
    void setName(std::string);
    bool getDone();
    void setDone(bool);  
    void insertInputNode(node*);
    void insertOutputNode(node*);
};

#ifdef	__cplusplus
}
#endif


#endif	/* NODE_H */

