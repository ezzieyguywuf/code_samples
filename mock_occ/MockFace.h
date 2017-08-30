#ifndef MockFace_HEADER
#define MockFace_HEADER

#include "IFace.h"

class MockFace : public IFace
{
    public:
        MockFace(unsigned int value);
        bool operator==(const IFace& aFace) const override;

    private:
        unsigned int val;
};

#endif //MockFace_HEADER
