#ifndef main_h
#define main_h

#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* main_h */
