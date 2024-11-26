#include<math.h>
#include<stdio.h>
int main(){
    float a,b,c;
    float delta=b*b-4*a*c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("phuong trinh co vo so nghiem");
                else
                    printf("phuong trinh vo nghiem");
            }
        else
            printf("huong trinh co mot nghiem: %f",-c/b);
    }
    else
    {
        if (delta<0)
            printf("phuong trinh vo nghiem");
        else if (delta==0)
            printf("phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
}
