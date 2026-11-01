#ifndef HTMLPrintable_H
#define HTMLPrintable_H

//HTML интерфейс
class HTMLPrintable
{
public:
    virtual std::string printAsHTML() const = 0;
};

#endif
