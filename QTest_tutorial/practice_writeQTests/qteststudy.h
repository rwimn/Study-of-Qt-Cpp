#ifndef QTESTSTUDY_H
#define QTESTSTUDY_H
#include <QTest>
#include <QObject>
#include <QWidget>

class QTestStudy : public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
    void toUpperUpdate_data();
    void toUpperUpdate();
    void guiTest();
    void guiTestUpdate();
    void guiTestUpdate_data();
};

#endif // QTESTSTUDY_H
