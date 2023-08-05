#include <iostream>
#include "order/order.h"
#include "order/side.h"
#include "orderbook/orderbook.h"
#include "orderbook/level.h"
#include "orderbook/orderBookEntry.h"


int main() {
    Order order("alatest123", Buy, 100, 5);
    OrderBook ob = OrderBook();
    std::cout << ob.isExistingOrder(order) << std::endl;
    ob.addOrder(order);
    std::cout << ob.isExistingOrder(order) << std::endl;
    std::cout << order.to_string() << std::endl;


    Level level;
    OrderBookEntry obe(order, level);

    level.addOrderBookEntry(obe);
    OrderBookEntry obeHead = level.getHeadEntry();
    std::cout << obeHead.to_string() << std::endl;
}