#pragma once
#include "Review.h"
#include "Order.h"
#include "item.h"
#define SIZE 2

class Report{
  private:
    Review* review[SIZE];
    Order* order[SIZE];
    item* item[SIZE];
  public:
    Report();
   // void addItemToReport(item* Item[]);
    void addOrderToReport(Order* order[]);
    void addReviewToReport(Review* review[]);
    void viewItemList();
    void viewReviewList();
    void viewOrderHistory();
    ~Report();
};