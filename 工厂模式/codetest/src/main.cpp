#include <iostream>

#include "concrete_factory.h"
#include "product.h"

using namespace std;

#define PTR_DELETE(ptr) { if(ptr){delete(ptr); (ptr) = NULL;} }

int main(int argc, char const *argv[])
{
    //创建公会
    GuildFactory * pFactory = new CreateGuildF();
    GuildProduct * pProduct = pFactory->MsgFactory();
    cout << pProduct->PrintMsg() << endl;

    //把delete后的指针赋值为null
    PTR_DELETE(pProduct);
    PTR_DELETE(pFactory);

    //公会加入新成员
    pFactory = new AddMemGuildF();
    pProduct = pFactory->MsgFactory();
    cout << pProduct->PrintMsg() << endl;

    PTR_DELETE(pProduct);
    PTR_DELETE(pFactory);

    //退出公会
    pFactory = new QuitGuildF();
    pProduct = pFactory->MsgFactory();
    cout << pProduct->PrintMsg() << endl;

    PTR_DELETE(pProduct);
    PTR_DELETE(pFactory);

    return 0;
}
