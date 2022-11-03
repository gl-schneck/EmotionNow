#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>

int main()
{
    int sec = 0;
    int min = 0;
    int hour = 0;
    char inp;

    scanf("%c", &inp);
    if(inp)
    {
        Sleep(10);
        while (1)
        {
            if(kbhit())
                break;
            else
            {
                if(sec == 60)
                {
                    sec = 0;
                    min++;
                    if(min == 60)
                    {
                        min = 0;
                        hour++;
                    }
                
                }
            
                system("cls");
                printf("%d:%d:%d\n", hour, min, sec);
                sec++;
                Sleep(1000);
            }
        }
    }
        
    return 0;
}
