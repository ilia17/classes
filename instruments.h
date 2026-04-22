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
        virtual void print();
        virtual ~TradingInstrument();
        bool operator<(const TradingInstrument& other) const{
            return price < other.price;
        }
        bool operator>(const TradingInstrument& other) const{
            return price > other.price;
        }
        bool operator==(const TradingInstrument& other) const{
            return price == other.price;
        }
        bool operator!=(const TradingInstrument& other) const{
            return price != other.price;
        }
        bool operator<=(const TradingInstrument& other) const{
            return price <= other.price;
        }
        bool operator>=(const TradingInstrument& other) const{
            return price >= other.price;
        }
        friend std::ostream& operator<<(std::ostream& os, const TradingInstrument& t) {
            os << "Symbol: " << t.symbol << " Price: " << t.price << " Quantity: " << t.quantity;
            return os;
        }

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