#include <stdio.h>
float simpleinterest(int,int,float),si=0;
int main(void) {
	int p,nom;
	float rate,si,amount;
	scanf("%d%d%f",&p,&nom,&rate);
	si=simpleinterest(p,nom,rate);
	amount=p+si;
	printf("%f\t%f",si,amount);
	return 0;
}

    float simpleinterest(int p,int nom,float rate)
    {
    si=(p*nom*rate)/(100*12);
    return si;
}

