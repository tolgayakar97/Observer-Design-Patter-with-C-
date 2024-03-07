#ifndef OBSERVERCONTROLLER_H
#define OBSERVERCONTROLLER_H

class IObserver {
    public:
        virtual void Update(int value) = 0; //pure virtual function
};

#endif // OBSERVERCONTROLLER_H