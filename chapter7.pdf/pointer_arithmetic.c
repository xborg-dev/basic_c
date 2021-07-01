//note =  character store= 1byte, int,float stores = 4 bytes//

#include <stdio.h>
/*int main(){

int i=4;
int *ptr=&i;        
//or ptr =&i
printf("the vlue of pointer is %d \n",ptr);
ptr++;             //or ptr=ptr+1
printf("the vlue of pointer is %d \n",ptr);

    return 0;
}
int main()
{

    char i = 3;
    char *ptr = &i;

    printf("the value of pointer is %d \n", ptr);
    ptr++;
    printf("the value of pointer is %d \n", ptr);

    return 0;
}*/
int main(){

float i=4.3;
float *ptr=&i;        
//or ptr =&i
printf("the vlue of pointer is %d \n",ptr);
ptr++; 
ptr++;
ptr++;            //or ptr=ptr+1
printf("the vlue of pointer is %d \n",ptr);

    return 0;}