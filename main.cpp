/* \
 Trinh To
    Jan 10 2020
    In class assignment #1
        This program will help you find the numbers of
        widgets that the pallet have based on its original
        weights and its weight with the widgets on.
*/

#include <iostream>

using namespace std;

int main() {
    
    const double WEIGHT=12.5;
    
    double originalP;
    double withwidgetsP;
    int countW;
    
    cout << "What is the pallet weighs by itself? " << endl ;
    
    cin >> originalP ;
    
    cout << endl << "What is the pallet weights with the widgets? " << endl;
    
    cin >> withwidgetsP;
    
    countW = (withwidgetsP - originalP) / WEIGHT;
    
    cout << endl << "There are " << countW << " widgets on the pallet." << endl << endl;
   
            
    return 0;
}
