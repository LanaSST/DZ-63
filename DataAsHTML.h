#ifndef DataAsHTML_H
#define DataAsHTML_H

#include "HTMLPrintable.h"

class DataAsHTML : public HTMLPrintable
{
public:
    explicit DataAsHTML(const std::string& data) : m_data(data) {}
    std::string printAsHTML() const override
    {
        return "<html>" + m_data + "<html/>";
    }
private:
    std::string m_data;
};

#endif
