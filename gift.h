#ifndef GIFT_H
#define GIFT_H

#pragma once

#include <QString>

#include "user.h"

class Gift
{
public:
    Gift();
    // Getters
    int GetId() {return Id;}
    QString GetGiftName() {return GiftName;}
    QString GetNote() {return Note;}
private:
    int Id;
    QString GiftName;
    QString Note;
    User *Reciver;
    User *Buyer;
};

#endif // GIFT_H
