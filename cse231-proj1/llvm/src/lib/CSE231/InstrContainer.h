#include<iostream>

namespace
{
class InstrContainer
{
    uint32_t opcode;
    std::string name;
    uint32_t no_args;
    std::vector<std::string> args;

public:
    uint32_t getOp();
    std::string getName();
    uint32_t getNoArgs();

    void setOp(uint32_t);
    void setName(std::string);
    void setNoArgs(uint32_t);

    friend llvm::raw_ostream& operator << (llvm::raw_ostream& os, const InstrContainer& obj)
    {
        os << obj.opcode << "\t" << obj.name << "\t" << obj.no_args;
        return os;
    }
};

uint32_t InstrContainer::getOp()
{
    return opcode;
}

std::string InstrContainer::getName()
{
    return name;
}

uint32_t InstrContainer::getNoArgs()
{
    return no_args;
}

void InstrContainer::setOp(uint32_t o)
{
    opcode = o;
}

void InstrContainer::setName(std::string s)
{
    name = s;
}

void InstrContainer::setNoArgs(uint32_t  n)
{
    no_args = n;
}



}
