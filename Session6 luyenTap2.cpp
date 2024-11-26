#include <stdio.h>
int main(){
    int a,b,c,d,e,even,odd;
    printf("Moi nhap vao 5 so nguyen: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2!=0){
        odd++;
    }
    else{
        even++
    }
    if(b%2!=0){
        odd++;
    }
    else{
        even++
    }
    if(c%2!=0){
         odd++;
    }
    else{
        even++
    }
    if(d%2!=0){
        odd++;
    }
    else{
        even++
    }
    if(e%2!=0){
        odd++;
    }
    else{
        even++
    }
    printf("Tong cac so le la: %d",odd);
    printf("Tong cac so chan la: %d",even);
}
