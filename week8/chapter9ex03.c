#include<stdlib.h>
#include<stdio.h>

int main(void){

    int r;
    int list1[] = {50, 20, 30,12,12}
    printf("Want: 5\n");
	r = count(45, num_list1, sizeof(num_list1));
	printf("Got: %d\n", result);

	int list2[] = { 3, 6, 1, 6, 2, 6, 8, 3, 4, 10, 6, 7, 3, 0, 2, 8, 3124 };
	printf("Want: 9\n");
	r = count(3, num_list2, sizeof(list2));
	printf("Got: %d\n", result);

	int list3[] = { 2, 1, 3, 5, 5, 9, 5, 5, 5, 5, 5 };
	printf("Want: 10\n");
	r = count(5, num_list3, sizeof(list3));
	printf("Got: %d\n", result);

	int list4[] = { 1, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 1 };
	printf("Want: 10\n");
	r = count(8, num_list4, sizeof(list4));
	printf("Got: %d\n", r);

    return 0;
}

int count(int number, int array[], length){

    if(array[length -1]){
        return(1 + count(number,array,length -1));
    }else{
        return(count(number, array, length-1));
    }

    if (length == 0)
    {
        return 0;
    }
    
}