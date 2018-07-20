// ----------------------------------------------------
// 抽象产品
//
// @author bishi_he@163.com
// ----------------------------------------------------
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

// 抽象产品
// 公会事件信息
class GuildProduct
{
public:
    virtual string PrintMsg() = 0;
};

#endif // PRODUCT_H