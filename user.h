#ifndef USER_H
#define USER_H

#pragma once

#include <QString>

class User
{
public:
    User();
    User(int id);
    User(int id, QString userName);
    User(int id, QString userName, QString password, bool admin);
    void Init();
    // Getters
    int GetId() {return Id;}
    QString GetUserName() {return UserName;}
private:
    int Id;
    QString UserName;
    QString Password;
    bool Admin;
};

#endif // USER_H
