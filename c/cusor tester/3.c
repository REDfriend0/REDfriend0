#include <windows.h>
#include <iostream>
#include <conio.h>
#include<unistd.h>
using namespace std;

int main()
{
    while (1)
    {
        char g = getch();
        int x, y;
        POINT xypos;
        
        if (g == 'S' || g == 's')
        {
            cout<<"Enter the new position:"<<endl;
            cin>>x>>y;
            for (x = x;x<=500;x++) {
            SetCursorPos(x, y);	
				unsigned int microsecond = 250;
				usleep(10 * microsecond);
			}
            
        }
        else if (g == 'g' || g == 'G')
        {
            GetCursorPos(&xypos);
            cout<<"X:"<<xypos.x<<"\tY:"<<xypos.y<<endl;
        }
    }
}

