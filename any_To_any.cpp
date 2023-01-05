#include<stdio.h>
#include<math.h>
int main(){
    int n,base,count = 0,last,multi = 1,sum = 0,elem;
    printf("enter base of number");
    scanf("%d",&base);

    if(base == 16){
            int rem, i=0, len=0;
    char hexnum[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hexnum);
    while(hexnum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            // getch();
            return 0;
        }
        sum = sum + (rem*std::pow(16, i));
        len--;
        i++;
    }
    printf("your decimal value : ");
    printf("%d",sum);
    }
    else
    {
        printf("enter number");
        scanf("%d",&n);
        while(n != 0)
    {
       last = n % 10;
       elem = last * multi;
       sum = sum + elem;
       multi *= base;
       n = n / 10;
    }
    printf("your decimal value : ");
    printf("%d",sum);
    }
    int base1,rem,i = 0;
    char arr[100];
    printf("\nenter base to convert");
    scanf("%d",&base1);
    while(sum != 0){
        rem = sum % base1;
        if(rem > 9){
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
        else{
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
        sum = sum / base1;
        i++;
    }
    int x = 0;
    int y = i-1;
    while(x < y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
  for(int j = 0; j < i; j++){
       printf("%c",arr[j]);
    }
}
