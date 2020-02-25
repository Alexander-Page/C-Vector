#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <stdio.h>

struct c_vector
{
    int length;
    int last;
    int endptr;
    int *vector;
};

int vec_length(struct c_vector vec)
{
    return vec.length;
}

void printvec(struct c_vector vec)
{
    int i = 0;

    for(i = 0; i < vec.length; i++)
    {
        printf("vector[%i] = %d\n", i, vec.vector[i]);
    }
}

void resize(struct c_vector *vec)
{
    int *ptr = vec->vector;
    ptr = (int*)realloc(vec->vector, ((vec->length + 1) * sizeof(int)));
    if (!ptr)
    {
        printf("Failed to resize Vector\n");
        exit(1);
    }
    vec->length++;
}

void push(struct c_vector *vec, int val)
{
    if(vec->endptr < vec->length)
    {
        vec->vector[vec->endptr] = val;
    }
    else if(vec->endptr >= vec->length)
    {
        resize(vec);
        vec->vector[vec->endptr] = val;
    }
    vec->endptr++;
}
#endif