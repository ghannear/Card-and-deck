#ifndef CARD_H
#define CARD_H
#include<vector>

class Cards
{
    private:
        std::string m_suit;
        std::string m_value;
    public:
        Cards();
        Cards(std::string s, std::string v);
        void print();   
};

#endif
