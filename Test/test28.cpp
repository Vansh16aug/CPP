#include<iostream>
using namespace std;
class Box {
    private:
    int length;
                    
    public:
    Box() {
        length = 0;
    } 
    void get() {  
    std::cin >> length;
    }                                            
    friend int printVolume(Box box);
};
    int printVolume(Box box) {
        int volume = box.length * box.length * box.length;
        return volume;
    }
        
        int main() {
            Box customBox;
            customBox.get();
            int volume = printVolume(customBox);
            std::cout  << volume << std::endl;
            return 0;
            }