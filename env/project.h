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

struct libeficaz_projects {
    eficaz_project **projects;
    int count;
} typedef eficaz_projects;

eficaz_projects ** create_projects_from_db(int **db);

#endif //LIBEFICAZ_PROJECT_H
