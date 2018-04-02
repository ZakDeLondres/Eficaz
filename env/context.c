//
// Created by zakdelondres on 03/03/18.
//

#include <stdlib.h>
#include <memory.h>
#include <printf.h>
#include "context.h"

eficaz_context ** create_context(eficaz_project *project, eficaz_sequence *sequence, eficaz_shot *shot) {
    eficaz_context *_context = malloc(sizeof(eficaz_context) + 1);
    eficaz_project *_project = malloc(sizeof(eficaz_project) + 1);
    eficaz_sequence *_seq = malloc(sizeof(eficaz_sequence) + 1);
    eficaz_shot *_shot = malloc(sizeof(eficaz_shot) + 1);

    _project->name = malloc(sizeof(char) * strlen("TESTPROJECT"));
    strcpy(_project->name, "TESTPROJECT");

    _context->project = _project;
    _context->sequence = _seq;
    _context->shot = _shot;

    return &_context;
}

eficaz_context ** update_context(eficaz_context **context) {

}

eficaz_context ** create_contexts_from_db(int **db) {
    db_recv_row **data = db_recv_data(&db, "users");

    printf(data[0]->data[1]);
}