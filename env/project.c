//
// Created by zakdelondres on 03/03/18.
//

#include <printf.h>
#include <stdlib.h>
#include <memory.h>
#include "project.h"

eficaz_project ** create_projects_from_db(EFICAZ_DB_PROTOCOL **db) {
    db_recv_rows *data = *db_recv_data(&db, "eficaz_projects");
    eficaz_project **projects = malloc(sizeof(eficaz_project *) * data->count);

    for (int i = 0; i < data->count; i++) {
        projects[i] = malloc(sizeof(eficaz_project));
        projects[i]->name = malloc(sizeof(data->rows[i]->data[2]));
        projects[i]->code = malloc(sizeof(data->rows[i]->data[1]));

        strcpy(projects[i]->name, data->rows[i]->data[2]);
        strcpy(projects[i]->code, data->rows[i]->data[1]);
    }

    return projects;
}