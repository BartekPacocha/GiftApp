#include "mainwindow.h"

#include <QApplication>
#include <QtDebug>
#include <memory>
#include <vector>

#include "user.h"
#include "gift.h"
#include "userlist.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    std::unique_ptr<UserList> userList(new UserList());

    std::shared_ptr<User> user(new User(1));
    std::shared_ptr<User> user2(new User(2, "user2"));
    std::shared_ptr<User> user3(new User(3, "user3"));
    std::shared_ptr<User> user4(new User(4, "user4"));
    std::shared_ptr<User> user5(new User(5, "user5"));
    std::shared_ptr<User> user6(new User(6, "user6"));

    userList->AddUser(user);
    userList->AddUser(user2);
    userList->AddUser(user3);
    userList->AddUser(user4);
    userList->AddUser(user5);
    userList->AddUser(user6);

    std::shared_ptr<User> u = userList->FindUserById(50);

    if(u)
        qDebug() << u->GetUserName();

    std::unique_ptr<Gift> gift(new Gift());
#if 0
    qDebug() << user->GetUserName();
    qDebug() << gift->GetNote();
    qDebug() << gift->GetGiftName();
#endif

    return a.exec();
}
