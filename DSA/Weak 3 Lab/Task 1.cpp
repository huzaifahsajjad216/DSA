#include <iostream>
#include "Course.h"

using namespace std;

int main()
{
    OnlineCourse online(8, 5);

    OfflineCourse offline(3, 4);

    cout << "Online Course Duration: "
         << online.duration()
         << " hours"
         << endl;

    cout << "Offline Course Duration: "
         << offline.duration()
         << " hours"
         << endl;

    return 0;
}