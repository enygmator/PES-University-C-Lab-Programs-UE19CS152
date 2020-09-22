typedef struct Distance
{
    int feet;
    int inches;
} Distance;

Distance* AddDistance(Distance d1, Distance d2);
void GetDistance(Distance* d);
void PrintDistance(Distance d);
