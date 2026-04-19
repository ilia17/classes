# include <iostream>
# include "instruments.h"

int main() {
    

    TradingInstrument* instruments[3];
    instruments[0] = new TradingInstrument("ETH", 2000, 5);
    instruments[1] = new Crypto("BTC", 10000, 1, "Bitcoin");
    instruments[2] = new Order("BTC", 10000, 1, "Buy");
    
    for (int i = 0; i < 3; i++) {
        instruments[i]->print();  // calls correct print for each type
    }

    for (int i = 0; i < 3; i++) {
        delete instruments[i];  // virtual destructor ensures correct cleanup
    }

    return 0;
}