#include <stdio.h>
#include <stdlib.h>
#include "c_vector.h"

int main()
{
   struct c_vector vec;
   vec.length = 3;
   vec.vector = (int*) malloc(vec.length * sizeof(int));
   vec.endptr = 0;
   push(&vec, 3);
   push(&vec, 14);
   push(&vec, 24);
   push(&vec, 13);
   printvec(vec);
}