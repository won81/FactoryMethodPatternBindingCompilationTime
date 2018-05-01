#include "Network.h"

class Tapanta {
public:
    Tapanta() {
        pNetwork = Network::Create();
    }

    ~Tapanta() {
        if (pNetwork) {
            delete[] pNetwork;
            pNetwork = NULL;
        }
    }

    Network* GetNetwork() {
        return pNetwork;
    }

private:
    Network* pNetwork;
};

