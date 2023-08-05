#include <iostream>
#include "orderBookEntry.h"
#include "../order/order.h"

OrderBookEntry::OrderBookEntry(Order& order, Level& parentLevel) {
    this->order = &order;
    this->parentLevel = &parentLevel;
}

std::string OrderBookEntry::to_string() {
    return order->to_string();
}