class Network {
public:
    virtual void PrintVersion() = 0;
    static Network* Create();
};

#include "_Network.h"

Network* Network::Create() {
    return new _Network();
}
