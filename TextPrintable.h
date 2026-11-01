#ifndef TextPrintable_H
#define TextPrintable_H

//Text интерфейс
class TextPrintable
{
public:
    virtual std::string printAsText() const = 0;
};

#endif
