#include "abstract_builder.h"
namespace builder {
class ABuilder : public IAbstractBuilder {
private:
    /* data */
public:
    ABuilder(/* args */);
    ~ABuilder();

    virtual void BuildFloor();

    virtual void BuildDoor();
    virtual void BuildRoof();
};

}  // namespace builder
