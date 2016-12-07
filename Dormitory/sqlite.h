#ifndef SQLITE_H
#define SQLITE_H

#include<QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include<QtSql/QSqlError>
#include <QFile>
/*QString create_sql = "create table student (id int primary key, name varchar(30), age int)";
QString select_max_sql = "select max(id) from student";
QString insert_sql = "insert into student values (?, ?, ?)";
QString update_sql = "update student set name = :name where id = :id";
QString select_sql = "select id, name from student";
QString select_all_sql = "select * from student";
QString delete_sql = "delete from student where id = ?";
QString clear_sql = "delete from student";
*/
#define CREATE 1
#define SEARCH 2
#define INSERT 3
#define UPDATE 4

void Init_sqlite();
bool Sqlinsert(QString s, QSqlQuery sql_query);
QString sqlquery(QString s);

#endif