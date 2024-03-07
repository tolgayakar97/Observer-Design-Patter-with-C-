#include <iostream>
#include "Observable.cpp"
#include "ObserverController/Concrete/FirstSubscriber.cpp"
#include "ObserverController/Concrete/SecondSubscriber.cpp"

int main() {
    
    Observable publisher;
    
    FirstSubscriber firstSub;
    SecondSubscriber secondSub;

    publisher.SetValue(50);

    publisher.Subscribe(&firstSub);
    publisher.GetAllSubscribers();

    publisher.Subscribe(&secondSub);
    publisher.GetAllSubscribers();

    publisher.Publish();

    publisher.SetValue(100);
    publisher.Publish();

    return 0;
}