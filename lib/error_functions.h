#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H


#ifdef __GNUC__
/**
 * Stops gcc -Wall complaining "control reaches end of non-void function"
 */
#define NORETURN __attribute__ ((__NORETURN__))
#else
#define NORETURN
#endif

// Prints text corresponding to errno 
void errMsg(const char *format, ...);

// Temrinates program also prints, either through exit() or abort() if core dump
// file is needed.
void errExit(const char *format, ...) NORETURN ;

// Doesn't flush STDOUT
// Calls _exit() instead of exit()
void err_exit(const char *format, ...) NORETURN; 

// Text corresponding to the error number given the errnum. For programs that
// use POSIX threads.
void errExitEN(int errnum, const char *format, ...) NORETURN; 

void fatal(const char *format, ...) NORETURN; 

void usageErr(const char *format, ...) NORETURN; 

void cmdLineErr(const char *format, ...) NORETURN; 

#endif /* ifndef ERROR_FUNCTIONS_H */
