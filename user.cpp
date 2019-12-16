#include "user.h"

User::User()
{
    Init();
}

User::User(int id)
{
    Init();
    Id = id;
}

User::User(int id, QString userName)
{
    Init();
    Id = id;
    UserName = userName;
}

User::User(int id, QString userName, QString password, bool admin) : Id(id), UserName(userName), Password(password), Admin(admin)
{
    //
}

void User::Init()
{
    Id = 0;
    UserName = "UserName";
    Password = "123";
    Admin = false;
}


