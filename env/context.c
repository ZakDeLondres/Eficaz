//
// Created by zakdelondres on 03/03/18.
//

#include <stdlib.h>
#include <memory.h>
#include "context.h"

eficaz_context ** create_context(eficaz_project *project, eficaz_sequence *sequence, eficaz_shot *shot) {

}

eficaz_context ** update_context(eficaz_context **context) {

}

eficaz_context ** create_test_context() {
    eficaz_context *context = malloc(sizeof(eficaz_context) + 1);
    eficaz_project *project = malloc(sizeof(eficaz_project) + 1);
    eficaz_sequence *seq = malloc(sizeof(eficaz_sequence) + 1);
    eficaz_shot *shot = malloc(sizeof(eficaz_shot) + 1);

    project->name = malloc(sizeof(char) * strlen("TESTPROJECT"));
    strcpy(project->name, "TESTPROJECT");

    context->project = &project;
    context->sequence = &seq;
    context->shot = &shot;

    return &context;
}