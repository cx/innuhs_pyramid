#ifndef __MODERN_H__
#define __MODERN_H__


#define LONGVERSION

void waitscreen(void) {}

void inputtxt(void) {printf("\033[1m\x1b[32m");}
void evidence1(void) {printf("\033[1m\x1b[31m");}
void evidence2(void) {}
void normaltxt(void) {printf("\033[0m\x1b[36m");}
void tab(void) {printf("\t");}

void init_term(void) {normaltxt();}

void leave(void) 
{
    printf("\033[0m");
}
#endif