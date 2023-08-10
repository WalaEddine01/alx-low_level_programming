#ifndef MAIN_H
#define MAIN_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_msg4_read_exist(ssize_t a, char *namefile);
int check_msg3_close(ssize_t a, ssize_t fd, char *buf);
int check_msg2_writing(ssize_t a, char *namefile);
int check_msg_args(int a);

#endif /*MAIN_H*/
