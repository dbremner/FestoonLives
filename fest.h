#ifndef FEST_H
#define FEST_H

#include <stdnoreturn.h>

#define N 8
typedef struct xyz {
    char           *type;
    union {
        struct xyz     *x[N];
        char           *s[N];
    }               list;
}              *X, XX;
typedef struct {
    char           *number, *ending, *tense, *an, *unspec, *passive;
}              *E, EE;

X nomq(E env);
X rel(void);
X sent(E env);
X nomy(void);
X np(E env);
X aux(E env);
X passive(E env);
X passprep(void);
X vp(E env);
X art(E env);
X modal(E env);
X perf(E env);
X prog(E env);
X verb(E env);
X noun(E env);
X nounal(E env);
X adjval(void);
char * prefix(void);
char * root(void);
int prob(double f);
char * tense(void);
char * number(void);
X getxx(char *type);
X verbal(E env);
X adverb(void);
X adjective(void);
X adjph(E env);
X prep(void);
X comp(E env);
X advp(E env);
X vprep(void);
E getenvq(void);
X comma(E env);
X conjadv(void);
X lconjadv(void);
X conjsub(void);
X lconjsub(void);
X conjugate(void);
X nomz(void);
X equation(void);
X turgid(E env);
int main(int argc, char *argv[]);
void pr(X tree);
void out(char *s);
void caps(void);
noreturn void abo(void);
char * splitup(char *strlab);

#endif
