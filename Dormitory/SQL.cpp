#include "sqlite.h"


void Init_sqlite()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("123.207.165.95");
	db.setPort(3306);
	db.setDatabaseName("abc");
	db.setUserName("root");
	db.setPassword("IOTkeshe2016");


	//打开数据库
	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("failed to connect.");
	}
	else
	{
		//QSqlQuery类提供执行和操作的SQL语句的方法。
		//可以用来执行DML（数据操作语言）语句，如SELECT、INSERT、UPDATE、DELETE， 
		//以及DDL（数据定义语言）语句，例如CREATE TABLE。
		//也可以用来执行那些不是标准的SQL的数据库特定的命令。
	}
}

QString sqlquery(QString s)
{
	QSqlQuery sql_query;
	sql_query.prepare(s);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
		return NULL;
	}
	else
	{
		while (sql_query.next())
		{
			
			QString name = sql_query.value(0).toString();
			qDebug() << QString("name:%1   ").arg(name);
			return name;

		}
	}
	
}

bool Sqlinsert(QString s,QSqlQuery sql_query)
{
	
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
		return false;
	}
	else
	{
		qDebug() << "inserted!";
		return true;
	}
}
/*void Sqlquery(QSqlDatabase database,int mode)
{
	QSqlQuery sql_query;
	int max_id = 0;
	switch (mode)
	{

	case CREATE:
		sql_query.prepare(create_sql);
		if (!sql_query.exec())
		{
			qDebug() << sql_query.lastError();
		}
		else
		{
			qDebug() << "table created!";
		}
		break;
    
	case SEARCH:
		//查询最大id
		
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
		break;


	case INSERT:
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
	break;


	case UPDATE:
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
		break;


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


		//关闭数据库
		database.close();
		//删除数据库
		QFile::remove("database.db");
	}
}*/