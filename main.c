#include <stdio.h>
#include <stdlib.h>


int main()
{
int num, size,callenter,sum;
sum = 0;
size = 1;
int arr[size];
int callcheck;


printf("In this pogram you will enter a 20 numbers to sum it\n");
printf("Enter the 1st number: ");
scanf(" %d", &num);

num = arr[0];

printf("array element= %d\n",arr[0] );
printf("the value of 'user input'= %d\n",num );


for(int i=0; i<20; i++){
callenter = enter();
callcheck = check(callenter, size, arr);

if (callcheck == 0){
    i--;
    continue;
    }

else{
    size = size+1;
    arr[size -1] = num;
    }

}

//calculte the sum of the array's elements
for(int i=0; i<=20; i++){
sum = arr[i]+sum;
}
return 0;
}




int check(int numcheck, int sizecheck, int arrcheck[]){
int checkreturn;
    printf("you are in the check function \n");
    printf("sizecheck= %d\n",sizecheck );

for (int i=0; i<sizecheck; i++){
    printf("numcheck= %d\n",numcheck );
    printf("arrcheck= %d\n",arrcheck[i] );
    printf("i= %d\n",i );

if(numcheck == arrcheck[i]){
    printf("This numbers has been added\n");
    checkreturn= 0;
}
    else{
    checkreturn= 1;
}
}
return checkreturn;
}


int enter(){
int numenter;
printf("you are in the enter function \n");
printf("Enter another number: ");
scanf(" %d", &numenter);
return numenter;
}

