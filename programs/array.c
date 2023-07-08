#include <stdio.h>
int main(){
    int i = 0;
    int ncars;
    
    scanf("%d", &ncars);
    
    int array[50];
    double weight;
    int id = 0;
    
    for(i=0; i<ncars; i++){
        scanf("%lf", &weight);
        array[id] = weight;
        id = id + 1;
    }

    int next = 0;
    for(i=0; i<ncars; i++){
	printf("%.1lf\n", 22.0-array[next]);
	next = next + 1;	
    }
    return (0);
}
