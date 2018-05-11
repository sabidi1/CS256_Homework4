//
//  PreferedCustomer.cpp
//
//
//  Created by Zeeshan Abidi on 5/5/18.
//

#include "PreferredCustomer.h"

PreferredCustomer::PreferredCustomer() {
}

void PreferredCustomer::setDiscountLevel(double discountLevel) {
    this->discountLevel = discountLevel;
}

double PreferredCustomer::getDiscountLevel() const {
    return discountLevel;
}

void PreferredCustomer::setPurchasesAmount(double purchasesAmount) {

    if (purchasesAmount < 0) {
        purchasesAmount = 0.0;
    }
    this->purchasesAmount = purchasesAmount;

    if (purchasesAmount < 500) {
        setDiscountLevel(0.0);

    } else if ((500 <= purchasesAmount) && (purchasesAmount < 1000)) {
        setDiscountLevel(0.05);

    } else if ((1000 <= purchasesAmount) && (purchasesAmount < 1500)) {
        setDiscountLevel(0.06);

    } else if ((1500 <= purchasesAmount) && (purchasesAmount < 2000)) {
        setDiscountLevel(0.07);

    } else {
        setDiscountLevel(0.1);
    }
}

double PreferredCustomer::getPurchasesAmount() const {
    return purchasesAmount;
}
