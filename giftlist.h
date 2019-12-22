#ifndef GIFTLIST_H
#define GIFTLIST_H

#pragma once

#include "gift.h"

#include <vector>
#include <memory>

class GiftList
{
public:
    GiftList();
    void Init();

    void AddGift(std::shared_ptr<Gift> gift);
    std::shared_ptr<Gift> FindGiftById(int id);
private:
    std::vector<std::shared_ptr<Gift>> giftList;
};

#endif // GIFTLIST_H
