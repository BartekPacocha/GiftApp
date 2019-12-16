#ifndef GIFT_H
#define GIFT_H

#pragma once

#include <QString>

#include "user.h"

class Gift
{
public:
    Gift();
    QString GetGiftName() {return GiftName;}
    QString GetNote() {return Note;}
private:
    QString GiftName;
    QString Note;
    User *Reciver;
    User *Buyer;
};

#endif // GIFT_H
