#include <iostream>
using namespace std;

#define ELEM(array)  (sizeof (array) / sizeof *(array))

typedef struct dummy_SStudent
{
    char szName[16];
    int  nJapanese;
    int  nMath;
    int  nEnglish;
}SStudent;

void Disp(const SStudent* pstudent)
{
    cout << "名前 : "   << pstudent->szName    << endl
         << "　国語 : " << pstudent->nJapanese << " 点, "
            "数学 : "   << pstudent->nMath     << " 点, "
            "英語 : "   << pstudent->nEnglish  << " 点" << endl;
}

int main()
{
    SStudent students[] = {
        { "赤井孝",   73, 98, 86, },
        { "笠井大介", 64, 45, 40, },
        { "吉田叶",   76, 78, 69, },
    };
    int      i;

    for(i = 0; i < ELEM(students); i++)
        Disp(&students[i]);

    return 0;
}
