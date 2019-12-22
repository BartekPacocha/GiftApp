#include "giftlist.h"

GiftList::GiftList()
{

}

void GiftList::Init()
{
    //
}

void GiftList::AddGift(std::shared_ptr<Gift> gift)
{
    giftList.push_back(gift);
}

std::shared_ptr<Gift> GiftList::FindGiftById(int id)
{
    for(auto const& gift : giftList) {
        if(gift->GetId() == id)
            return gift;
    }
    return nullptr;
}
