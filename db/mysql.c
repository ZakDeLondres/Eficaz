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