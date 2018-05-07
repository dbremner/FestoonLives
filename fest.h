#ifndef FEST_H
#define FEST_H

#include <stdnoreturn.h>

#define N 8
typedef struct xyz {
    const char         *type;
    struct {
        struct xyz     *x[N];
        const char     *s[N];
    }               list;
}              *X, XX;
typedef struct {
    const char *number;
    const char *ending;
    const char *tense;
    const char *an;
    const char *unspec;
    const char *passive;
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
const char * prefix(void);
const char * root(void);
int prob(double f);
const char * tense(void);
const char * number(void);
X getxx(const char *type);
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
void out(const char *s);
void caps(size_t iolen, char *buffer, size_t buffer_len);
noreturn void abo(void);
char * splitup(const char *strlab);

#endif
