#ifndef MYSTRING_H
#define MYSTRING_H

#include <QObject>

class MyString : public QObject
{
    Q_OBJECT
public:
    explicit MyString(QObject *parent = nullptr);

signals:

};

#endif // MYSTRING_H
