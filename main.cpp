#include <iostream>

#include "Tapanta.h"

using namespace std;

int main() {
    Tapanta* pTapanta = new Tapanta();
    Network* pNetwork = pTapanta->GetNetwork();

    pNetwork->PrintVersion();

    return 0;
}
