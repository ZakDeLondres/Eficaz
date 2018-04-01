//
// Created by Zakariyah Abdel-Illah on 1/4/18.
//

#ifndef EFICAZ_MYSQL_H
#define EFICAZ_MYSQL_H

#include <mysql/mysql.h>

MYSQL ** db_connect(char *host, char *user, char *pass, char *dbName, int *port);

#endif //EFICAZ_MYSQL_H
