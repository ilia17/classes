#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H
# include <iostream>

class TradingInstrument{
    protected:
        std::string symbol;
        double price;
        int quantity;
    
    public:
        //constructor
        TradingInstrument(std::string sym, double p, int q);
        virtual ~TradingInstrument();
        virtual void print();
};  

//derived class
class Crypto : public TradingInstrument{
    private:
        std::string blockchain;
    
    public:
        Crypto(std::string sym, double p, int q, std::string chain);
        void print() override;
};


class Order : public TradingInstrument{
    private:
        std::string side;
    
    public:
        Order(std::string sym, double p, int q, std::string s);
        void print() override;
};

#endif