#include <stdio.h>

void func(int n1,int b1){
    char data[] ="0000000000000";
    int i,j, h, m;
    char ch;

    i = 0; j = 12;
    while(n1 != 0){
        m = n1 % b1;
        h = n1 / b1;
        n1 = h;

        switch(m){
            case 0:
                ch = '0';
                break;
            case 1:
                ch = '1';
                break;
            case 2:
                ch = '2';
                break;
            case 3:
                ch = '3';
                break;
            case 4:
                ch = '4';
                break;
            case 5:
                ch = '5';
                break;
            case 6:
                ch = '6';
                break;
            case 7:
                ch = '7';
                break;
            case 8:
                ch = '8';
                break;
            case 9:
                ch = '9';
                break;
            defalt:
                ch = '0';
        }

        data[j] = ch;

        i++;
        j--;
    }
    printf("%s\n",data);
}

int main (void){
    int n,b;

    scanf("%d %d",&n,&b);
    func(n,b); 
}