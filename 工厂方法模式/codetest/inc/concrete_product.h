// ----------------------------------------------------
// 具体产品
//
// @author bishi_he@163.com
// ----------------------------------------------------

#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"

// 创建公会信息产品
class CreateGuildMsg : public GuildProduct
{
public:
    string PrintMsg() {
        return "Create Guild!";
    };
};

// 公会加入新成员产品
class AddMemGuildMsg : public GuildProduct
{
public:
    string PrintMsg() {
        return "Add New Member";
    };
};

// 退出公会产品
class QuitGuildMsg : public GuildProduct
{
public:
    string PrintMsg() {
        return "Quit Guild";
    };
};

#endif // CONCRETE_PRODUCT_H