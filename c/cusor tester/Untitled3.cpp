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
			int m;
	        m = 1000;
            for (x = x;x<=500;x+=10) {
	            SetCursorPos(x, y);	
				unsigned int microsecond = m;
				usleep(1 * microsecond);
			}
            
        }
        else if (g == 'g' || g == 'G')
        {
            GetCursorPos(&xypos);
            cout<<"X:"<<xypos.x<<"\tY:"<<xypos.y<<endl;
        }
    }
}

