#include "userlist.h"

UserList::UserList()
{

}

void UserList::Init()
{
    //
}

void UserList::AddUser(std::shared_ptr<User> user)
{
    userList.push_back(user);
}

std::shared_ptr<User> UserList::FindUserById(int id)
{
    for(auto const& user : userList) {
        if(user->GetId() == id)
            return user;
    }
    return nullptr;
}
