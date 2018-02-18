#ifndef FEST_H
#define FEST_H

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
X rel(E env);
X sent(E env);
X nomy(E env);
X np(E env);
X aux(E env);
X passive(E env);
X passprep(E env);
X vp(E env);
X art(E env);
X modal(E env);
X perf(E env);
X prog(E env);
X verb(E env);
X noun(E env);
X nounal(E env);
X adjval(E env);
char * prefix(E env);
char * root(E env);
int prob(double f);
char * tense(void);
char * number(void);
X getxx(void);
X verbal(E env);
X adverb(E env);
X adjective(E env);
X adjph(E env);
X prep(E env);
X comp(E env);
X advp(E env);
X vprep(E env);
E getenvq(void);
X comma(E env);
X conjadv(E env);
X lconjadv(E env);
X conjsub(E env);
X lconjsub(E env);
X conjugate(E env);
X nomz(E env);
X equation(E env);
X turgid(E env);
int main(int argc, char *argv[]);
void pr(X tree);
void out(char *s);
void caps(void);
void abo(void);
char * splitup(char *strlab);

#endif
