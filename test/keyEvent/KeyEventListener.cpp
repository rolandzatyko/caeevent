#include "KeyEventListener.h"
#include <iostream>

namespace cae {

    KeyEventListener::KeyEventListener(Event& _iEventNum, Event& _iEventStr) : iEventNum(_iEventNum), iEventStr(_iEventStr) {
        iEventNum += [](const EventArgs& iArgs) { onNumber((const NumberEventArgs&)iArgs); };
        iEventStr += [](const EventArgs& iArgs) { onString((const StringEventArgs&)iArgs); };
    }

    void KeyEventListener::onNumber(const NumberEventArgs &iArgs) {
        std::cout << "On number event called. Value: " << iArgs.getArg() << std::endl;
    }

    void KeyEventListener::onString(const StringEventArgs &iArgs) {
        std::cout << "On string event called. Value: " << iArgs.getArg() << std::endl;
    }
}