#ifndef DataAsJSON_H
#define DataAsJSON_H

#include "JSONPrintable.h"

class DataAsJSON : public JSONPrintable
{
public:
    explicit DataAsJSON(const std::string& data) : m_data(data) {}
    std::string printAsJSON() const override
    {
        return "{ \"data\": \"" + m_data + "\"}";
    }
private:
    std::string m_data;
};

#endif

