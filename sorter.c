#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
 	printf("Before: \n");
  	printValues(values);

  	// test swap
  	int x = 3;
  	int y = 5;
 	printf("x: %d, y: %d \n", x, y);
 	swap(&x, &y);
  	printf("x: %d, y: %d \n", x, y);

  	sort(values);
  	printf("After: \n");
  	printValues(values);

  	return(0);
} // end main

int printValues(){
	for (i = 0; i < MAX; i++){
		printf("%d, ", values[i]);
	}

	printf("\n");

} // end printValues

int sort(){
	step = 0;
	for (i = 0; i < 8; i++){
		values[step] = x;
		values[step + 1] = y;

		if (x > y){
			swap();
			step += 1;
		}

		else {
			step += 1;
		}
	}


} // end sort

int swap(){
	temp = 0;
	x = temp;
	x = y;
	y = temp;

} // end swap
