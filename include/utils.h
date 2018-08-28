/*
   Copyright 2018 - The OPRECOMP Project Consortium, Alma Mater Studiorum
   Università di Bologna. All rights reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

/* C++ */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef flexfloat_utils_h
#define flexfloat_utils_h 1

#define MAX_DEP_ARITY 3


typedef struct _dependency_t {
    const char *label;
    const flexfloat_t *refs[MAX_DEP_ARITY];
} dependency_t;

typedef struct _node_t {
    const void *elem;
    struct _node_t *next;
} node_t;

extern node_t * FlexFloatVars;

void ll_addNode(node_t **list, const void *elem);

#ifdef FLEXFLOAT_DEPGRAPH
dependency_t * createDependency1(const char *label, const flexfloat_t *op0);
dependency_t * createDependency2(const char *label, const flexfloat_t *op0, const flexfloat_t *op1);
dependency_t * createDependency3(const char *label, const flexfloat_t *op0, const flexfloat_t *op1, const flexfloat_t *op2);
void addDependencyNode(node_t **list, const dependency_t *dep);
void addEnvVariable(const flexfloat_t *var);
void ff_export_deps(FILE *file);
#endif

#endif

/* C++ */
#ifdef __cplusplus
}
#endif
