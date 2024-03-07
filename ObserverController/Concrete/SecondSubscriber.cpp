#include <iostream>
#include "../Abstract/IObserver.h"

class SecondSubscriber : public IObserver
{
public:
    void Update(int value)
    {
        std::cout << "SecondSubscriber New Value : " << value << std::endl;
    }
};
