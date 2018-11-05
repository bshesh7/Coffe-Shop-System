#include "product.h"

Product::Product(std::string name, double price, double cost)
    : _name{name}, _price{price}, _cost{cost} { }

std::string Product::name() {return _name;}

double Product::price() {return _price;}

double Product::cost() {return _cost;}
/*
Body_style Vehicle::body_style() {return _body_style;}

std::string Vehicle::body_style_to_string() {
    if (body_style() == Body_style::SEDAN) return "Sedan"; 
    else if (body_style() == Body_style::HATCHBACK) return "Hatchback";
    else if (body_style() == Body_style::MINIVAN) return "Minivan";
    else if (body_style() == Body_style::TRUCK) return "Truck";
    else if (body_style() == Body_style::CROSSOVER) return "Crossover";
    else return "SUV";

}
*/

 
