#include<stdio.h> // include the standard input-output library
#include<math.h>  // include the math library

int main(){
    int n,base,count = 0,last,multi = 1,sum = 0,elem; // declare and initialize variables
    printf("enter base of number: ");
    scanf("%d",&base);

    // if the base is 16 (hexadecimal)
    if(base == 16){
        int rem, i=0, len=0;
        char hexnum[20];
        printf("Enter any Hexadecimal Number: ");
        scanf("%s", hexnum);

        // get the length of the hexadecimal number
        while(hexnum[i]!='\0')
        {
            len++;
            i++;
        }
        len--;
        i=0;

        // convert the hexadecimal number to decimal
        while(len>=0)
        {
            rem = hexnum[len];
            if(rem>=48 && rem<=57) // for digits 0-9
                rem = rem-48;
            else if(rem>=65 && rem<=70) // for digits A-F
                rem = rem-55;
            else if(rem>=97 && rem<=102) // for digits a-f
                rem = rem-87;
            else // if an invalid hexadecimal digit is entered
            {
                printf("\nYou've entered an invalid Hexadecimal digit ");
                return 0;
            }
            sum = sum + (rem*std::pow(16, i));
            len--;
            i++;
        }
        // printf("your decimal value : ");
        // printf("%d",sum);
    }
    else // if the base is not 16
    {
        printf("enter number: ");
        scanf("%d",&n);
        // convert the number to decimal
        while(n != 0)
        {
           last = n % 10;
           elem = last * multi;
           sum = sum + elem;
           multi *= base;
           n = n / 10;
        }
        // printf("\nyour decimal value : ");
        // printf("%d",sum);
    }
    int base1,rem,i = 0;
    char arr[100];
    printf("\nenter base to convert: ");
    scanf("%d",&base1);
    // convert the decimal number to the desired base
    while(sum != 0){
        rem = sum % base1;
        if(rem > 9){ // for bases greater than 10
            switch(rem)
            {
                case 10: arr[i] = 'A';
                        break;
                case 11: arr[i] = 'B';
                        break;
                case 12: arr[i] = 'C';
                        break;
                case 13: arr[i] = 'D';
                        break;
                case 14: arr[i] = 'E';
                        break;
                case 15: arr[i] = 'F';
                        break;
                default:
                        break;
            }
        }
        else{ // for bases less than or equal to 9

             switch(rem){
                case 0 : arr[i] = '0';
                break;
                 case 1 : arr[i] = '1';
                break;
                 case 2 : arr[i] = '2';
                break;
                 case 3 : arr[i] = '3';
                break;
                 case 4 : arr[i] = '4';
                break;
                 case 5 : arr[i] = '5';
                break;
                 case 6 : arr[i] = '6';
                break;
                 case 7 : arr[i] = '7';
                break;
                 case 8 : arr[i] = '8';
                break;
                 case 9 : arr[i] = '9';
                break;
                default : break;
            }
        }
        //converts decimal to the required base
        sum = sum / base1;
        i++;
    }
    int x = 0;
    int y = i-1;
    //store the number into the array
    while(x < y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
    //print the number
  for(int j = 0; j < i; j++){
       printf("%c",arr[j]);
    }
    printf("\n21DCE067");
 }
    
