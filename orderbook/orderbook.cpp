#include <iostream>
#include "orderbook.h"
#include "../order/order.h"

OrderBook::OrderBook() {
}

void OrderBook::addOrder(Order order) {
    this->orderSet.insert(order.getOrderId());
}

bool OrderBook::isExistingOrder(Order order) {
    if (orderSet.count(order.getOrderId())) {
        return true;
    }

    return false;
}