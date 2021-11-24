#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"

error factorial(calc_st n,result_t* answer)
{
     answer->final_answer=fac(n!);
     return SUCCESS;
}
