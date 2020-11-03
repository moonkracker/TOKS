#include "csma.h"


using namespace std;

int main()
{
    //std::cout << "1 - CSMA/CD" << endl << "2 - CSMA/CA" << endl;
    CSMA_CD cd1("one", 124);
    CSMA_CD cd2("two", 533);
    CSMA_CD cd3("three", 532);
    CSMA_CD cd4("four", 464);
    CSMA_CD cd5("five", 234);
   /* CSMA_CA ca1("one", 14);
    CSMA_CA ca2("two", 5);
    CSMA_CA ca3("three", 7);
    switch (_getch()) 
    {
    case '1':*/
        cd1.beginTransmitting();
        cd2.beginTransmitting();
        cd3.beginTransmitting();
        cd4.beginTransmitting();
        cd5.beginTransmitting();
        cin.get();
        cd1.stop();
        cd2.stop();
        cd3.stop();
        cd4.stop();
        cd5.stop();
       /* break;
    case '2':
        ca1.beginTransmitting();
        ca2.beginTransmitting();
        ca3.beginTransmitting();
        ca1.stop();
        ca2.stop();
        ca3.stop();
        break;
    default:
        break;
    }
   

   */
    return 0;
}