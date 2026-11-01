#ifndef JSONPrintable_H
#define JSONPrintable_H

//JSON интерфейс
class JSONPrintable
{
public:
    virtual std::string printAsJSON() const = 0;
};

#endif
