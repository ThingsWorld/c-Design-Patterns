#include <iostream>

#include "concrete_factory.h"
#include "product.h"

using namespace std;

#define PTR_DELETE(ptr) { if(ptr){delete(ptr); (ptr) = NULL;} }

int main(int argc, char const *argv[])
{
    //北极熊
    MonsterFactory * BearFactory = new BearF();
    SkillProduct * PolarBearS = BearFactory->Skill();
    NameProduct * PolarBearN = BearFactory->Name();

    cout << PolarBearN->NameMsg("PolarBear") << " use " << PolarBearS->SkillMsg("thump") << endl;

    PTR_DELETE(PolarBearN);
    PTR_DELETE(PolarBearS);
    PTR_DELETE(BearFactory);

    //眼镜蛇
    MonsterFactory * SnakeFactory = new SnakeF();
    SkillProduct * CobraS = SnakeFactory->Skill();
    NameProduct * CobraN = SnakeFactory->Name();

    cout << CobraN->NameMsg("Cobra") << " use " << CobraS->SkillMsg("venom") << endl;

    PTR_DELETE(CobraN);
    PTR_DELETE(CobraS);
    PTR_DELETE(SnakeFactory);

    return 0;
}
