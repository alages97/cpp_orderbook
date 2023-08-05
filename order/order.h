#ifndef ORDER_H
#define ORDER_H

#include "side.h"

class Order {
    std::string orderId;
    Side side;
    double initialQty;
    double currentQty;
    double price;
    
    public:
        Order(std::string orderId, Side side, double qty, double price);
        std::string getOrderId();
        std::string to_string();
};

#endif