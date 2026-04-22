# include <iostream>
# include "instruments.h"

int main() {
    

    TradingInstrument* instruments[3];
    instruments[0] = new TradingInstrument("ETH", 2000, 5);
    instruments[1] = new Crypto("BTC", 10000, 1, "Bitcoin");
    instruments[2] = new Order("BTC", 10000, 1, "Buy");
    
    for (int i = 0; i < 3; i++) {
        std::cout << *instruments[i] << "\n";  // calls correct print for each type
    }

    std::cout << std::boolalpha;
    std::cout << "instruments[0] < instruments[1]: " << (*instruments[0] < *instruments[1]) << std::endl;
    std::cout << "instruments[0] > instruments[1]: " << (*instruments[0] > *instruments[1]) << std::endl;
    std::cout << "instruments[0] == instruments[1]: " << (*instruments[0] == *instruments[1]) << std::endl;
    std::cout << "instruments[0] != instruments[1]: " << (*instruments[0] != *instruments[1]) << std::endl;

    for (int i = 0; i < 3; i++) {
        delete instruments[i];  // virtual destructor ensures correct cleanup
    }

    return 0;
}