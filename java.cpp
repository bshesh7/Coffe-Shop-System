#include "java.h"
#include<iostream>
#include<vector>
Java::Java(std::string name, double price, double cost, int darkness)
    : Product(name, price, cost),_darkness{darkness} { }
void Java::to_string(){
std::cout<<"Java string"<<std::endl;
};  
void Java::add_shot(Shot shot){
_shots.push_back(shot);
}
