#include "TxLib.h"
int main()
{
 txCreateWindow (800, 600);

HDC  map = txLoadImage ("subwoofer.bmp");
int sizeX=txGetExtentX(map)/4;
int sizeY=txGetExtentY(map)/4;



int nanim=0;
int t=1;

while(!txGetAsyncKeyState(VK_ESCAPE))
{
  txSetFillColor(RGB(128,255,255));
  txRectangle(0,0,800,600);

//txBitBlt(txDC(),0,0,0,0,map,0,0);
txTransparentBlt	(txDC(),0,0,sizeX,sizeY,map,0*sizeX,(t%4)*sizeY,RGB(255,0,255));
txTransparentBlt	(txDC(),sizeX,sizeY,sizeX,sizeY,map,1*sizeX,(t%4)*sizeY,RGB(255,0,255));

t++;
txSleep(100);

}

txDeleteDC (map);

return(0);
}

