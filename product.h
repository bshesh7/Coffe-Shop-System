#ifndef __PRODUCT_H
#define __PRODUCT_H
#include <string>

//enum class Body_style{SEDAN, HATCHBACK, MINIVAN, TRUCK, CROSSOVER, SUV};

class Product {
  public:
    Product(std::string name, double price, double cost);
    std::string name();
    double price();
    double cost();
     void to_string();
  protected:
    std::string _name;
    double _price;
    double _cost;
};
#endif
