#include "NamedSolid.h"
#include "MockFace.h"
#include <iostream>

int main(void)
{
    MockFace face1(1);
    MockFace face2(2);
    MockFace face3(3);

    NamedSolid nSolid(vector<IFace*>{&face1, &face2});
    unsigned int index = nSolid.getIndex(face2);
    nSolid.modifyFace(1, &face3);
    if (face3 == nSolid.getFace(index))
        std::cout << "pass" << std::endl;
    else
        std::cout << "fail" << std::endl;
    return 0;
}
