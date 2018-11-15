#include<iostream>
#include"card.h"
#include<string>

Cards::Cards()
{
    SPADE_SIZE[] = 52;
}
Cards::Cards(std::string s, std::string v)
{
    m_suit = s;
    m_value = v;
}
