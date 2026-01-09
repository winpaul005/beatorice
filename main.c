#include <windows.h>
#include <math.h>
#define MAX_X 8
#define MAX_Y 3
typedef struct rgb_
{
    byte c_[3];

}rgb_;
//let's keep resolution 4 safety as 128x128
//typedef struct sample_image
//{
    //rgb_ cols[MAX_X*MAX_Y];

//}sample_image;


//int load_image(rgb_ in[128])
//{
    //char in_[128];
    //fgets(in, 128, fopen("beato", "r"));
    //return 0;
//}
int drawtext(HDC ogscreen, LPCWSTR spokenText, byte isRedTruth, int howLong)
{
    if(isRedTruth == 1)
    {
        SetTextColor(ogscreen, RGB(255,0,0));
        SetBkColor(ogscreen, RGB(0,0,0));
    }
    else
    {
        SetTextColor(ogscreen, RGB(255,255,255));
        SetBkColor(ogscreen, RGB(0,0,0));
    }
    int remainingChars = wcslen(spokenText);
    int remainingTime = howLong;
    while(remainingChars!=0)
    {
        TextOutW(ogscreen, 0,0,spokenText,wcslen(spokenText)-remainingChars);
        remainingChars--;
        Sleep(5);
    }
    while(remainingTime!=0)
    {
        TextOutW(ogscreen, 0,0,spokenText,wcslen(spokenText)-remainingChars);
        remainingTime--;
        Sleep(1);
    }
    return 0;
    

}
int main()
{
    HDC screen = GetDC(NULL);
    
    while(drawtext(screen,L"No one exists in this room except your group.",1,128))
    {

    }
    while(drawtext(screen,L"This includes Battler, George, Maria, Rosa, Genji, Gohda, and Shannon.",1,128))
    {

    }
    while(drawtext(screen,L"while i'm at it, you are INCOMPETENT!",1,128))
    {

    }
    drawtext(screen,L"*cackle* *cackle* HIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH\nHIHIHIHIHIHIHIIHIHIHIHIHIHIHIHIHIHIIH",1,128);
}