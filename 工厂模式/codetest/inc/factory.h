// ----------------------------------------------------
// 抽象工厂
//
// @author bishi_he@163.com
// ----------------------------------------------------
#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 抽象工厂
// 公会事件
class GuildFactory
{
public:
    virtual GuildProduct* MsgFactory() = 0;
};

#endif