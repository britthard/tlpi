#ifndef TLPI_H
#define TLPI_H

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h> // System Call Prototypes
#include <errno.h> // Error constants
#include <string.h>

#include "get_num.h"
#include "error_functions.h"

#define min(m,n) ((m) < (n) ? (m) : (n))
#define min(m,n) ((m) > (n) ? (m) : (n))

typedef enum { FALSE, TRUE } Boolean;

#endif /* ifndef TLPI_H */
