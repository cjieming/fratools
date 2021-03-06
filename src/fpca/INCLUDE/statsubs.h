#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>  

#include "strsubs.h" 

#define	CHI_EPSILON     0.000001    /* accuracy of critchi approximation */
#define	CHI_MAX     99999.0         /* maximum chi square value */

#define	LOG_SQRT_PI     0.5723649429247000870717135 /* log (sqrt (pi)) */
#define	I_SQRT_PI       0.5641895835477562869480795 /* 1 / sqrt (pi) */
#define	BIGX           20.0         /* max value to represent exp (x) */
#define	ex(x)             (((x) < -BIGX) ? 0.0 : exp (x))

double medchi(int *cls, int len, int *n0, int *n1, double *kstail)  ;
double ks2(int *cls, int len, int *n0, int *n1, double *kstail)  ;
double probks(double lam) ;

double nordis(double z) ;
double ntail(double z) ;
double zprob(double p) ;
double conchi(double *a, int m, int n)  ;
double chitest(double *a, double *p, int n) ;

double xlgamma(double x) ;
double psi(double x) ;
double tau(double x) ;
void bernload() ;
double bernum(int x) ;

void mleg(double a1, double a2, double *p, double *lam) ;

double dilog(double x) ;
double li2(double x) ;

double hwstat(double *x) ;

double bprob(double p, double a, double b)  ;
double lbeta(double a, double b)  ;
double dawson(double t) ;

double binomtail(int n, int t, double p, char c) ;
double binlogtail(int n, int t, double p, char c) ;
void genlogbin(double *a, int n, double p) ;
int ifirstgt(int val, int *tab, int n)  ;
int firstgt(double val, double *tab, int n)  ;

double rtlchsq(int df, double z) ;
double critchi(int df, double z) ;
double rtlf(int df1, int df2, double f) ;

double twtail(double twstat) ;
double twnorm(double lam, double m, double n) ;

