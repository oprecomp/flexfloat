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

#include "flexfloat.h"
#include "utils.h"

#include <stdlib.h>

void ll_addNode(node_t **list, const void *elem)
{
    node_t *new_node = malloc(sizeof(node_t));
    new_node->elem = elem;
    new_node->next = *list;
    *list = new_node;
}

void addEnvVariable(const flexfloat_t *var)
{
    ll_addNode(&FlexFloatVars, var);
}

#ifdef FLEXFLOAT_DEPGRAPH
dependency_t * createDependency1(const char *label, const flexfloat_t *op0)
{
  dependency_t *dep = malloc(sizeof(dependency_t));
  dep->label = label;
  dep->refs[0] = op0;
  dep->refs[1] = NULL;
  dep->refs[2] = NULL;
  return dep;
}

dependency_t * createDependency2(const char *label, const flexfloat_t *op0, const flexfloat_t *op1)
{
  dependency_t *dep = malloc(sizeof(dependency_t));
  dep->label = label;
  dep->refs[0] = op0;
  dep->refs[1] = op1;
  dep->refs[2] = NULL;
  return dep;
}

dependency_t * createDependency3(const char *label, const flexfloat_t *op0, const flexfloat_t *op1, const flexfloat_t *op2)
{
  dependency_t *dep = malloc(sizeof(dependency_t));
  dep->label = label;
  dep->refs[0] = op0;
  dep->refs[1] = op1;
  dep->refs[2] = op2;
  return dep;
}

void addDependencyNode(node_t **list, const dependency_t *dep)
{
   ll_addNode(list, dep);
}


void ff_export_deps(FILE *file)
{
    node_t *it, *it2;
    flexfloat_t *var;
    int i, counter;

    // Open DOT graph
    fprintf(file, "digraph ff_callgraph {\n");

    // Nodes
    it = FlexFloatVars;
    while(it != NULL)
    {
        var = (flexfloat_t *) it->elem;
        fprintf(file, "    %s [shape=box];\n", var->label);
        it = it->next;
    }

    // Edges
    it = FlexFloatVars;
    while(it != NULL)
    {
        var = (flexfloat_t *) it->elem;
        it2 = var->dep_list;
        counter = 0;
        while(it2 != NULL)
        {
          dependency_t *dep = (dependency_t *) it2->elem;
          fprintf(file, "    %d [label=%s, shape=circle];\n", counter, dep->label);
          for(i = 0; i<MAX_DEP_ARITY; ++i)
          {
            if(dep->refs[i] != NULL)
            {
              fprintf(file, "    %s -> %d;\n", dep->refs[i]->label, counter);
            }
          }
          fprintf(file, "    %d -> %s;\n", counter, var->label);
          counter++;
          it2 = it2->next;
        }
        it = it->next;
    }

    // Close END graph
    fprintf(file, "}\n");
}
#endif
