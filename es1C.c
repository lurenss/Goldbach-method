#include "es1C.h"

int nump(int n){
	int supp = 2;
		if(n==2){
			return 2;
		}	
	while(supp < n){
		if((n%supp)==0){
			return 0;
		}
		supp++;
	}
	return supp;
}

int goldbach(int n) {
	int p1;
	int p2;
	int i=2;
	int flag = 1;
	if(n>2 && (n%2==0)){
		while(flag){	
			while(nump(i)==0){
				i++;
			}
			p1=nump(i);
			p2= n-p1;
			if(nump(p2)!=0)
				flag=0;
			else
				i++;
		}
		if(p1<p2)
			return p1;
		else
			return p2;
	}		
  
  return 0;
}



