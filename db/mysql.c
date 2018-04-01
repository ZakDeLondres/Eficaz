//
// Created by Zakariyah Abdel-Illah on 1/4/18.
//

#include <stddef.h>
#include <stdlib.h>
#include <memory.h>
#include <printf.h>
#include "mysql.h"

MYSQL ** db_connect(char *host, char *user, char *pass, char *dbName, int *port) {
    MYSQL *db = mysql_init(NULL);

    if (mysql_real_connect(db, host, user, pass, dbName, port, NULL, NULL) == NULL) {
        fprintf(stderr, "%s\n", mysql_error(db));
    }

    return db;
}

int db_create_datasource(MYSQL **db, char *name) {
    MYSQL *_db = *db;
    char *query = malloc(sizeof(char) * (strlen(name) + strlen(" CREATE DATABASE;")));
    strcpy(query, "CREATE DATABASE ");
    strcat(query, name);
    strcat(query, ";");

    mysql_query(_db, query);
}

int db_create_datatable(MYSQL **db, char *name, db_table_column **columns) {
    MYSQL *_db = *db;
    char *query = malloc(sizeof(char) * (strlen("CREATE TABLE ()") + strlen(name)));
    strcpy(query, "CREATE TABLE ");
    strcat(query, name);
    strcat(query, "(");

//    while (*columns++) {
//        db_table_column *column = *columns;
//        query = realloc(query, sizeof(query) + (sizeof(char) * (strlen(column->name) + strlen(" ") + strlen(column->db_value_type))));
//    }

    strcat(query, ")");

    mysql_query(_db, query);
}

int db_post_data(MYSQL **db, char *target, db_post_value **value) {
    MYSQL *_db = *db;
    char *query = malloc(sizeof(char) * (strlen("INSERT INTO VALUES()") + strlen(target)));
    strcpy(query, "INSERT INTO ");
    strcat(query, target);
    strcat(query, " VALUES(");

//    while (*columns++) {
//        db_table_column *column = *columns;
//        query = realloc(query, sizeof(query) + (sizeof(char) * (strlen(column->name) + strlen(" ") + strlen(column->db_value_type))));
//    }

    strcat(query, ")");

    mysql_query(_db, query);
}

db_recv_row **db_recv_data(MYSQL **db, char *target) {
    MYSQL *_db = *db;
    char *query = malloc(sizeof(char) * (strlen("SELECT * FROM ") + strlen(target)));
    strcpy(query, "SELECT * FROM ");
    strcat(query, target);

    mysql_query(_db, query);

    MYSQL_RES *result = mysql_store_result(_db);
    int MYSQL_FIELD_COUNT = mysql_num_fields(_db);
    MYSQL_ROW *row;

    while ((row == mysql_fetch_row(result))) {
        for (int i = 0; i < MYSQL_FIELD_COUNT, i++) {
            printf("RECV");
        }
    }

    mysql_free_result(result);
}