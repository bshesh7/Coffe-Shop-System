#ifndef _DONUT_H
#define _DONUT_H

#include "product.h"

enum class Frosting{Unfrosted, Chocolate_top, Vanilla_top, Pink_top};
enum class Filling{Unfilled, Creme, Bavarian, Strawberry};
class Donut : public Product {
  public:
   	 Donut(std::string name, double price, double cost, Frosting frosting,bool sprinkles, Filling filling);
	  void to_string();   	
	 //double gallons_consumed(double miles);
  protected:
   	 //double _miles_per_gallon;
   	 //double _max_gallons;
    	Frosting _frosting;
    	Filling _filling;
	bool _sprinkles; 
};
#endif
