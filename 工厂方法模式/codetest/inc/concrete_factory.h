// ----------------------------------------------------
// 具体工厂
//
// @author bishi_he@163.com
// ----------------------------------------------------
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

// 创建公会工厂
class CreateGuildF : public GuildFactory
{
public:
    GuildProduct* MsgFactory() {
        return new CreateGuildMsg();
    };
};

// 公会添加新成员工厂
class AddMemGuildF : public GuildFactory
{
public:
    GuildProduct* MsgFactory() {
        return new AddMemGuildMsg();
    };
};

// 退出公会工厂
class QuitGuildF : public GuildFactory
{
public:
    GuildProduct* MsgFactory() {
        return new QuitGuildMsg();
    };
};

#endif // CONCRETE_FACTORY_H