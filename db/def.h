//
// Created by Zakariyah Abdel-Illah on 2/4/18.
//

#ifndef EFICAZ_DEF_H
#define EFICAZ_DEF_H

//#include "mysql.h"

struct __db_table_column {
    char **name;
    char **db_value_type;
} typedef db_table_column;

struct __db_post_value {
    char **variable;
    char **content;
} typedef db_post_value;

struct __db_recv_row {
    char **column;
    char **data;
} typedef db_recv_row;

struct __db_recv_rows {
    db_recv_row **rows;
    int count;
} typedef db_recv_rows;

extern int** db_connect(char *host, char *user, char *pass, char *dbName, int port);
extern int db_create_datasource(int **db, char *name);
extern int db_create_datatable(int **db, char *name, db_table_column **columns);
extern int db_post_data(int **db, char *target, db_post_value **value);
extern db_recv_rows **db_recv_data(int **db, char *target);

#endif //EFICAZ_DEF_H
