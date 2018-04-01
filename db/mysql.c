//
// Created by Zakariyah Abdel-Illah on 1/4/18.
//

#include <stddef.h>
#include "mysql.h"

MYSQL ** db_connect(char *host, char *user, char *pass, char *dbName, int *port) {
    MYSQL *db = mysql_init(NULL);
    mysql_real_connect(db, host, user, pass, dbName, port, NULL, NULL);

    return &db;
}