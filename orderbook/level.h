#ifndef LEVEL_H
#define LEVEL_H

#include "orderBookEntry.h"
#include "../order/side.h"

class OrderBookEntry;

class Level {
    Side side;
    double price;
    OrderBookEntry* headEntry;
    OrderBookEntry* tailEntry;
    
    public:
        Level();
        bool addOrderBookEntry(OrderBookEntry& orderBookEntry);
        OrderBookEntry getHeadEntry();
};

#endif