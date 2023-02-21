#ifndef MYSQLTEST_H
#define MYSQLTEST_H
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QApplication>
#include <QtWidgets/QMessageBox>
#include <string>
class mysqltest
{
public:
    mysqltest();
    QSqlDatabase db;
    QString find(QString id,QString password);
    bool add(QString id,QString name,QString password);
};

#endif // MYSQLTEST_H
