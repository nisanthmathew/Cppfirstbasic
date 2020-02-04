#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class TestQunittest : public QObject
{
    Q_OBJECT

public:
    TestQunittest();
    ~TestQunittest();

private slots:
    void test_case1();


};

TestQunittest::TestQunittest()
{

}

TestQunittest::~TestQunittest()
{

}

void TestQunittest::test_case1()
{

}

QTEST_MAIN(TestQunittest)

#include "tst_testqunittest.moc"
