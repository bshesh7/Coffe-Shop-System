#pragma once
#include "product.h"
#include "customer.h"

class Order{
	private: 
		std::vector<Product*> _products;
    std::vector<Customer*> _customers;
		bool is_paid;
		bool is_filled;
		int _order_number;
	public: 
		Order();
		int order_number();
		void add_product(Product* product);
		bool paid();
		void pay();
		bool filled();
		void fill();				
};

