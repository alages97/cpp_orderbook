#include <iostream>
#include "order.h"
#include "side.h"

Order::Order(std::string orderId, Side side, double qty, double price) {
    this->orderId = orderId;
    this->side = side;
    this->initialQty = qty;
    this->currentQty = qty;
    this->price = price;
}

std::string Order::getOrderId() {
    return orderId;
}

std::string Order::to_string() {
    //TODO fill up the to string
    return "[" + orderId + "] ";
}