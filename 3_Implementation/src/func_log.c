#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief modulus function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error logg(calc_st n,result* answer)
{
    answer->final_answer=mod(|n|);
    return SUCCESS;
}
