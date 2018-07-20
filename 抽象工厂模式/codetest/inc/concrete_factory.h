// ----------------------------------------------------
// 具体工厂
//
// @author bishi_he@163.com
// ----------------------------------------------------
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

// 熊工厂
class BearF : public MonsterFactory
{
public:
    SkillProduct* Skill() {
        return new BearSkill();
    };
    NameProduct* Name() {
        return new BearName();
    };
};

// 蛇工厂
class SnakeF : public MonsterFactory
{
public:
    SkillProduct* Skill() {
        return new SnakeSkill();
    };
    NameProduct* Name() {
        return new SnakeName();
    };
};

#endif // CONCRETE_FACTORY_H