#ifndef ORDER_BOOK_ENTRY_H
#define ORDER_BOOK_ENTRY_H

#include "../order/side.h"
#include "../order/order.h"
#include "level.h"

class Level;

class OrderBookEntry {
    Order* order;
    Level* parentLevel;
    OrderBookEntry* prev;
    OrderBookEntry* next;
    
    public:
        OrderBookEntry(Order& order, Level& parentLevel);
        std::string to_string();
};

#endif