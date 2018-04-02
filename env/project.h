//
// Created by zakdelondres on 03/03/18.
//

#ifndef LIBEFICAZ_PROJECT_H
#define LIBEFICAZ_PROJECT_H

#include "../db/def.h"

struct libeficaz_project {
    char **code;
    char **name;
} typedef eficaz_project;

eficaz_project ** create_projects_from_db(EFICAZ_DB_PROTOCOL **db);

#endif //LIBEFICAZ_PROJECT_H
