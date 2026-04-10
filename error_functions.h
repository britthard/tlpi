#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

void errMsg(const char *format, ...);

#ifdef __GNUC__
/**
 * Stops gcc -Wall complaining "control reaches end of non-void function"
 */
#define NORETURN __attribute__ ((__NORETURN__))
#else
#define NORETURN
#endif

void errExit(const char *format, ...) NORETURN ;

void err_exit(const char *format, ...) NORETURN; 

void errExitEN(int errnum, const char *format, ...) NORETURN; 

void fatal(const char *format, ...) NORETURN; 

void usageErr(const char *format, ...) NORETURN; 

void cmdLineErr(const char *format, ...) NORETURN; 

#endif /* ifndef ERROR_FUNCTIONS_H */
