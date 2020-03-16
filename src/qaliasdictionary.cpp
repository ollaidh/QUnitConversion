#include "qaliasdictionary.h"

QAliasDictionary::QAliasDictionary()
{

}

QString QAliasDictionary::name(const QString &alias) const
{
    return m_aliases.value(alias);
}

QList<QString> QAliasDictionary::aliases(const QString &name) const
{
    return m_aliases.keys(name);
}

bool QAliasDictionary::isEmpty() const
{
    return m_aliases.isEmpty();
}

void QAliasDictionary::addAlias(const QString &name, const QString &alias)
{
    m_aliases.insert(alias, name);
}

