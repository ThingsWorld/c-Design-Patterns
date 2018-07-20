// ----------------------------------------------------
// 具体产品
//
// @author bishi_he@163.com
// ----------------------------------------------------

#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"

/************************ 技能 *********************************/
//蛇的技能
class SnakeSkill: public SkillProduct
{
public:
    string SkillMsg(string s) {
        return s;
    };
};

//熊的技能
class BearSkill: public SkillProduct
{
public:
    string SkillMsg(string s) {
        return s;
    };
};

/************************ 名字 *********************************/
//蛇的名字
class SnakeName: public NameProduct
{
public:
    string NameMsg(string n) {
        return n;
    };
};

//熊的名字
class BearName: public NameProduct
{
public:
    string NameMsg(string n) {
        return n;
    };
};

#endif // CONCRETE_PRODUCT_H