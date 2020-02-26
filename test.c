#include <stdio.h>
#include <stdlib.h>
#include "c_vector.h"

int main()
{
   struct c_vector vec = vec_initialize(3);
   
   push(&vec, 3);
   push(&vec, 14);
   push(&vec, 24);
   push(&vec, 13);
   push(&vec, 103);

   printvec(vec);
   vec_reverse(&vec);
   printf("\nVector reversed:\n");
   printvec(vec);
}