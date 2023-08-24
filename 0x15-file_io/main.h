#ifndef MAIN_H
#define MAIN_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_msg4_read_exist(ssize_t a, char *namefile);
void ver_P(unsigned char *e);
void abios_P(unsigned char *e);
int check_msg3_close(ssize_t a, ssize_t fd);
void data_P(unsigned char *e);
int check_msg2_writing(ssize_t a, char *namefile);
void class_P(unsigned char *e);
int check_msg_args(int a);
void magic_P(unsigned char *e);
void abi_P(unsigned char *e);
void type_P(unsigned int type_e, unsigned char *e);
void entry_P(unsigned long int entry_e, unsigned char *e);
void elf_C(int elf);
void elf_checking(unsigned char *e);

#endif /*MAIN_H*/
