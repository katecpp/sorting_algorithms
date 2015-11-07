#ifndef CFOO_H
#define CFOO_H

#include <QMetaType>
#include <string>

namespace F
{
class CFoo
{
public:
    CFoo() : m_number(0), m_name("") {}
    CFoo(int nr, std::string name) : m_number(nr), m_name(name) {}

    bool operator <(const CFoo& other) const;
    bool operator ==(const CFoo& other) const;
    CFoo& operator=(const CFoo &other);

private:
    int m_number;
    std::string m_name;
};
}

Q_DECLARE_METATYPE(F::CFoo)
#endif // CFOO_H
