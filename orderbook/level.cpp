#include <iostream>
#include "level.h"
#include "orderBookEntry.h"
#include "../order/order.h"

Level::Level() {
    headEntry = nullptr;
    tailEntry = nullptr;
}

bool Level::addOrderBookEntry(OrderBookEntry& orderBookEntry) {
    std::cout << "entering method call" << std::endl;

    if (headEntry == nullptr && tailEntry == nullptr) {
        //new obe is the only obe in this level
        std::cout << "Adding obe to the level here" << std::endl;
        headEntry = &orderBookEntry;
        tailEntry = &orderBookEntry;
    }

    return true;
}

OrderBookEntry Level::getHeadEntry() {
    return *headEntry;
}
