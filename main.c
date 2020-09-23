#include <stdio.h>
#include <stdlib.h>

int check(int numcheck, int sizecheck, int arrcheck[]);
int enter(int numenter);


int main()
{
printf("In this pogram you will enter a 20 numbers to sum it\n");
int num, size, callcheck, callenter,sum;
size=1;
sum = 0;
int arr[size];
printf("enter the 1st number: \n");
scanf(" %d", &num);



for(int i=0; i<21; i++){
printf("enter another number: \n");
scanf(" %d", &num);

callcheck = check(num, size, arr);


if (callcheck == 1){
    printf("this numbers has been added\n");
    printf("enter another number: ");
    scanf(" %d", &num);
    callcheck = check(num, size, arr);


}
else{
size = size+1;
arr[size -1] = num;
}
}

for(int i=0; i<=20; i++){
sum = arr[i]+sum;
}


return 0;
}




int check(int numcheck, int sizecheck, int arrcheck[]){
for (int i=0; i<sizecheck; i++){
if (numcheck == arrcheck[i]){
return 1;
}

else{
return 0;
}
}
}

