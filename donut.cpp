#include "donut.h"
#include <stdexcept>
#include<iostream>
#include<cstdlib>
Donut::Donut(std::string name, double price, double cost, Frosting frosting, bool sprinkles, Filling filling)
    : Product(name, price, cost),_frosting{frosting}, _sprinkles{sprinkles},_filling{filling} { }

void Donut::to_string(){
std::cout<<"Donut string"<<std::endl;
};   	


//double Gas_vehicle::gallons_consumed(double miles) {
  //  double gallons = miles / _miles_per_gallon;
    //if (gallons > _max_gallons) throw std::runtime_error{"Insufficient gas - need " + std::to_string(gallons)};
    //return gallons;
//}
