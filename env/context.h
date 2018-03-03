//
// Created by zakdelondres on 03/03/18.
//

#ifndef LIBEFICAZ_PROJECT_H
#include "project.h"
#endif

#ifndef LIBEFICAZ_SEQUENCE_H
#include "sequence.h"
#endif

#ifndef LIBEFICAZ_SHOT_H
#include "shot.h"
#endif

#ifndef LIBEFICAZ_CONTEXT_H
#define LIBEFICAZ_CONTEXT_H

struct libeficaz_context {
    eficaz_project **project;
    eficaz_sequence **sequence;
    eficaz_shot **shot;
} typedef eficaz_context;

eficaz_context ** create_context(eficaz_project *project, eficaz_sequence *sequence, eficaz_shot *shot);
eficaz_context ** update_context(struct libeficaz_context **context);

#endif //LIBEFICAZ_CONTEXT_H
