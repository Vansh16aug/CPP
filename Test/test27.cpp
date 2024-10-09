
#include<iostream>
#include<iomanip>

double calculateSpeed(double distance, double time) {
    return distance / time;
}

double calculateTrainSpeed(double distance, double time, double acceleration_train) {
    return (distance / time) + acceleration_train * time;
}

double calculatePlaneSpeed(double distance, double time, double acceleration_plane) {
    return (distance / time) + acceleration_plane * time;
}

int main() {
    double distance, time, acceleration_train, acceleration_plane;
        
    std::cin >> distance >> time >> acceleration_train >> acceleration_plane;
                
                   
    double car_speed = calculateSpeed(distance, time);
    double train_speed = calculateTrainSpeed(distance, time, acceleration_train);
    double plane_speed = calculatePlaneSpeed(distance, time, acceleration_plane);
                                
                                  
    std::cout << std::fixed << std::setprecision(2) << car_speed << std::endl;
    std::cout << train_speed << std::endl;
    std::cout << plane_speed << std::endl;
                                                
    return 0;
}