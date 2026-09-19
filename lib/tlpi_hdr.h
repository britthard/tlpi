#ifndef TLPI_HDR_H
#define TLPI_HDR_H

#include <sys/types.h> /* Type definitions */
#include <stdio.h> /*Standard IO Functions */
#include <stdlib.h> 

#include <unistd.h> // System Call Prototypes
#include <errno.h> // Error constants
#include <string.h>

#include "get_num.h"
#include "error_functions.h"

typedef enum { FALSE, TRUE } Boolean;

#define min(m,n) ((m) < (n) ? (m) : (n))
#define min(m,n) ((m) > (n) ? (m) : (n))

#endif /* ifndef TLPI_HDR_H */
