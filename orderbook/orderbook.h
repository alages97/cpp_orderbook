#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <unordered_set>
#include "../order/order.h"

class OrderBook {
    std::unordered_set<std::string> orderSet;
    
    public:
        OrderBook();
        void addOrder(Order order);
        bool isExistingOrder(Order order);
};
#endif