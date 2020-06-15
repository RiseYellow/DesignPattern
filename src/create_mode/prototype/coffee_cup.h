#include "cup.h"

namespace prototype {
class CoffeeCup : public ICup {
private:
    /* data */
public:
    CoffeeCup(/* args */);
    ~CoffeeCup();
    virtual std::shared_ptr<ICup> clone() override;
};

}  // namespace prototype