#ifndef USERLIST_H
#define USERLIST_H

#pragma once

#include <vector>
#include <memory>
#include "user.h"


class UserList
{
public:
    UserList();
    void Init();

    void AddUser(std::shared_ptr<User> user);
    std::shared_ptr<User> FindUserById(int id);
private:
    std::vector<std::shared_ptr<User>> userList;
};

#endif // USERLIST_H
