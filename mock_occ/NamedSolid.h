#ifndef NamedSolid_HEADER
#define NamedSolid_HEADER

#include "IFace.h"
#include <vector>

using std::vector;

class NamedSolid
{
    public:
        NamedSolid(vector<IFace*> f);
        unsigned int getIndex(const IFace& aFace) const;
        void modifyFace(unsigned int index, IFace* newFace);
        const IFace& getFace(const unsigned int index) const;

    private:
        vector<IFace*> faces;
};

#endif //NamedSolid_HEADER
