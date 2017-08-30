#ifndef IFace_HEADER
#define IFace_HEADER

class IFace
{
    public:
        virtual ~IFace() = 0;
        virtual bool operator==(const IFace& aFace) const = 0;
};

inline IFace::~IFace(){};

#endif //IFace_HEADER
