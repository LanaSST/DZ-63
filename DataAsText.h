#ifndef DataAsText_H
#define DataAsText_H

#include "TextPrintable.h"

class DataAsText : public TextPrintable
{
public:
    explicit DataAsText(const std::string& data) : m_data(data) {}
    std::string printAsText() const override { return m_data; }
private:
    std::string m_data;
};

#endif
