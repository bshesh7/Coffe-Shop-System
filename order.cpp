#include "order.h"


Order::Order() { }

int Order::order_number(){return _order_number;}

bool Order::paid(){return is_paid;}
void Order::pay(){is_paid = true;}
bool Order::filled(){return is_filled;}
void Order::fill(){is_filled = true;}


