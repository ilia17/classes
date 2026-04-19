# include <iostream>
# include "instruments.h"


TradingInstrument::TradingInstrument(std::string sym, double p, int q){
       symbol = sym;
       price = p;
       quantity = q;
}
TradingInstrument::~TradingInstrument(){}	

void TradingInstrument::print(){
    std::cout << "Symbol: " << symbol << " Price: " << price << " Quantity: " << quantity << std::endl;
}

Crypto::Crypto(std::string sym, double p, int q, std::string chain): TradingInstrument(sym, p, q){
    blockchain = chain;
}

void Crypto::print(){
    std::cout << "Symbol: " << symbol << " Price: " << price << " Quantity: " << quantity << " Blockchain: " << blockchain << std::endl;
}


Order::Order(std::string sym, double p, int q, std::string s): TradingInstrument(sym, p, q){
    side = s;
}

void Order::print(){
    std::cout << "Symbol: " << symbol << " Price: " << price << " Quantity: " << quantity << " Side: " << side << std::endl;
}