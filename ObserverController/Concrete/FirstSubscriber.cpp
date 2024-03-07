#include <iostream>
#include "../Abstract/IObserver.h"

class FirstSubscriber : public IObserver
{
public:
    void Update(int value)
    {
        std::cout << "FirstSubscriber New Value : " << value << std::endl;
    }
};
