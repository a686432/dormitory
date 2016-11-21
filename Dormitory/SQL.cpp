#include "sql"

void Init_sqlite()
{
	QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
	database.setDatabaseName("database.db");
	database.setUserName("root");
	database.setPassword("123456");
}
//打开数据库
if (!database.open())
{
	qDebug() << database.lastError();
	qFatal("failed to connect.");
}
else
{
	//QSqlQuery类提供执行和操作的SQL语句的方法。
	//可以用来执行DML（数据操作语言）语句，如SELECT、INSERT、UPDATE、DELETE， 
	·	 //以及DDL（数据定义语言）语句，例如CREATE TABLE。
	//也可以用来执行那些不是标准的SQL的数据库特定的命令。
	QSqlQuery sql_query;

	QString create_sql = "create table student (id int primary key, name varchar(30), age int)";
	QString select_max_sql = "select max(id) from student";
	QString insert_sql = "insert into student values (?, ?, ?)";
	QString update_sql = "update student set name = :name where id = :id";
	QString select_sql = "select id, name from student";
	QString select_all_sql = "select * from student";
	QString delete_sql = "delete from student where id = ?";
	QString clear_sql = "delete from student";

	sql_query.prepare(create_sql);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "table created!";
	}

	//查询最大id
	int max_id = 0;
	sql_query.prepare(select_max_sql);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		while (sql_query.next())
		{
			max_id = sql_query.value(0).toInt();
			qDebug() << QString("max id:%1").arg(max_id);
		}
	}
	//插入数据
	sql_query.prepare(insert_sql);
	sql_query.addBindValue(max_id + 1);
	sql_query.addBindValue("name");
	sql_query.addBindValue(25);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "inserted!";
	}

	//更新数据
	sql_query.prepare(update_sql);
	sql_query.bindValue(":name", "Qt");
	sql_query.bindValue(":id", 1);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "updated!";
	}

	//查询部分数据
	if (!sql_query.exec(select_sql))
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		while (sql_query.next())
		{
			int id = sql_query.value("id").toInt();
			QString name = sql_query.value("name").toString();

			qDebug() << QString("id:%1    name:%2").arg(id).arg(name);
		}
	}

	//查询所有数据
	sql_query.prepare(select_all_sql);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		while (sql_query.next())
		{
			int id = sql_query.value(0).toInt();
			QString name = sql_query.value(1).toString();
			int age = sql_query.value(2).toInt();

			qDebug() << QString("id:%1    name:%2    age:%3").arg(id).arg(name).arg(age);
		}
	}

	//删除数据
	sql_query.prepare(delete_sql);
	sql_query.addBindValue(max_id);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "deleted!";
	}

	//清空表
	sql_query.prepare(clear_sql);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "cleared";
	}
}

//关闭数据库
database.close();

//删除数据库
QFile::remove("database.db");