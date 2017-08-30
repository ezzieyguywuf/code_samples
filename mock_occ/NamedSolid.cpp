#include "NamedSolid.h"

NamedSolid::NamedSolid(vector<IFace*> f)
    : faces(f)
{}

unsigned int NamedSolid::getIndex(const IFace& aFace) const
{
    unsigned int i = 0;
    for (const auto& face : faces){
        if (*face == aFace){
            return i;
        }
        ++i;
    }
    // should really raise an error here
    return -1;
}

void NamedSolid::modifyFace(unsigned int index, IFace* newFace)
{
    faces[index] = newFace;
}

const IFace& NamedSolid::getFace(const unsigned int index) const
{
    return *faces[index];
}
