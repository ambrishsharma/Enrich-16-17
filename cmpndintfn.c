#include <stdio.h>
#include <math.h>
float simpleinterest(int,int,float);
float cmpndinterest(int,int,float),si=0,ci=0;
int main(void) {
	int p,nom;
	float rate,si,ci,amount;
	scanf("%d%d%f",&p,&nom,&rate);
	si=simpleinterest(p,nom,rate);
	ci=cmpndinterest(p,nom,rate);
	amount=p+si;
	printf("simple intrest is:%f\nAmount is:%f\nThe ci:%f",si,amount,ci);
	return 0;
}

    float simpleinterest(int p,int nom,float rate)
    {
    si=(p*nom*rate)/(100*12);
    return si;
}
    float cmpndinterest(int p,int nom, float rate)
    {
        ci=(p*pow((1+(rate*nom/1200)),(nom/12)))-p;
        return ci;
    }
