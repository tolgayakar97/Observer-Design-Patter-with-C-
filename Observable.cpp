#include <iostream>
#include "ObserverController/Abstract/IObserver.h"

class Observable {
    
    private:
        int m_publishedField;
        std::vector<IObserver*> m_subscribers; //IObserver* provides polymorphism.

    public:
        void SetValue(int value)
        {
            m_publishedField = value;
        }

        void Subscribe(IObserver* newSubscriber)
        {
            m_subscribers.push_back(newSubscriber);
        }

        void GetAllSubscribers()
        {
            for (auto subs: m_subscribers)
            {
                std::cout << subs << std::endl;
            }
        }

        void Publish()
        {
            //For each loop
            for(IObserver* subscriber : m_subscribers)
            {
                subscriber->Update(m_publishedField);
            }
        }
};