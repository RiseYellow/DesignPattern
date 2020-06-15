#include "abstract_builder.h"
namespace builder {
class BBuilder : public IAbstractBuilder {
private:
    /* data */
public:
    BBuilder(/* args */);
    ~BBuilder();

    virtual void BuildFloor();

    virtual void BuildDoor();
    virtual void BuildRoof();
};

}  // namespace builder
