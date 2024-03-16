#include <stdio.h>
#include <stdlib.h>

int main()
{

int eingabeStunde, eingabeMinute, neueStunde;

printf("24h time: ");
scanf("%d:%d", &eingabeStunde, &eingabeMinute);

neueStunde = eingabeStunde - 12;

        if(eingabeStunde < 12 && eingabeStunde != 0){
            printf("12h time: %2d:%02d AM", eingabeStunde, eingabeMinute);
        }

        else if (eingabeStunde == 12){
            printf("12h time: %2d:%02d PM", eingabeStunde, eingabeMinute);
        }

        else if(eingabeStunde <1){
            printf("12h time: 12:%02d AM", eingabeMinute);
        }

        else{
            printf("12h time: %2d:%02d PM", neueStunde, eingabeMinute);
        }

return 0;

}
