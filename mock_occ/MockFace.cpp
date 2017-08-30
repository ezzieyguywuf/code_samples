#include "MockFace.h"

MockFace::MockFace(unsigned int value)
    : val(value)
{}

bool MockFace::operator==(const IFace& aFace) const
{
    const MockFace& checkFace = static_cast<const MockFace&>(aFace);
    return val == checkFace.val;
}
