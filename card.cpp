#include<iostream>
#include"card.h"
#include<string>

Cards::Cards()
{
    ;
}
Cards::Cards(std::string s, std::string v)
{
    m_suit = s;
    m_value = v;
}

void Cards::print()
{
    std::cout << "Your card is: " << s << ", " << v << std::endl;
}




