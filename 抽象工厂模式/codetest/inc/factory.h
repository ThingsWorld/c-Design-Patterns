// ----------------------------------------------------
// 抽象工厂
//
// @author bishi_he@163.com
// ----------------------------------------------------
#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 抽象工厂
// 怪物工厂
class MonsterFactory
{
public:
    virtual SkillProduct* Skill() = 0;
    virtual NameProduct* Name() = 0;
};

#endif