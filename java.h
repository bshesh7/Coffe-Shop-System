#ifndef _JAVA_H
#define _JAVA_H

#include<vector>
#include "product.h"

enum class Shot{None, Chocolate, Vanilla, Peppermint, Hazelnut};

class Java : public Product {
  public:
   	 Java(std::string name, double price, double cost, int darkness);
	  void to_string();  
	void add_shot(Shot shot); 	
	 //double gallons_consumed(double miles);
  protected:
   	 //double _miles_per_gallon;
   	 //double _max_gallons;
	int _darkness;
	std::vector<Shot> _shots;

};
#endif
