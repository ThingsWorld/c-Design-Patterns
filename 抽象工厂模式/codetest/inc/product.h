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
// 技能信息
class SkillProduct
{
public:
    virtual string SkillMsg(string s) = 0;
};

// 名字信息
class NameProduct
{
public:
    virtual string NameMsg(string n) = 0;
};

#endif // PRODUCT_H