//
// Created by Zakariyah Abdel-Illah on 1/4/18.
//

#ifndef EFICAZ_MYSQL_H
#define EFICAZ_MYSQL_H

#include <mysql/mysql.h>

MYSQL typedef EFICAZ_DB_PROTOCOL;

#ifndef EFICAZ_DEF_H
#include "def.h"
#endif

#define DB_VALUETYPE_INTEGER "INT"
#define DB_VALUETYPE_TEXT "VARCHAR"

//MYSQL ** db_connect(char *host, char *user, char *pass, char *dbName, int *port);
//int db_create_datasource(MYSQL **db, char *name);
//int db_create_datatable(MYSQL **db, char *name, db_table_column **columns);
//int db_post_data(MYSQL **db, char *target, db_post_value **value);
//db_recv_row **db_recv_data(MYSQL **db, char *target);

#endif //EFICAZ_MYSQL_H
