#include <iostream>
#include <string> // Include for std::string

class Stats
{
public:
    float speed;
    float acceleration;
    float physical;
    float dribbling;
    float defending;
    float shooting;
    int rating;
    // Constructor with parameters
    Stats(float speed, float acceleration, float physical, float dribbling, float defending, float shooting, float rating)
        : speed(speed), acceleration(acceleration), physical(physical), dribbling(dribbling), defending(defending), shooting(shooting), rating((speed + acceleration + physical + dribbling + defending + shooting) / 6)

    {
    }
    void showStats()
    {
        std::cout << "Speed: " << speed << std::endl;
        std::cout << "Acceleration: " << acceleration << std::endl;
        std::cout << "Physical: " << physical << std::endl;
        std::cout << "Dribbling: " << dribbling << std::endl;
        std::cout << "Defending: " << defending << std::endl;
        std::cout << "Shooting: " << shooting << std::endl;
        std::cout << "Rating: " << rating << std::endl;
    }
};

class Player : public Stats
{
public:
    std::string name;
    double price;
    std::string club_name;
    std::string country;

    // Constructor with parameters
    Player(std::string name, double price, std::string club_name, std::string country, float speed, float acceleration, float physical, float dribbling, float defending, float shooting)
        : Stats(speed, acceleration, physical, dribbling, defending, shooting, rating), // Call base class constructor
          name(name), price(price), club_name(club_name), country(country)
    {
    }
    void introducePlayer()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Club: " << club_name << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

int main()
{
    // Example usage
    Player player1("PlayerName1", 134999.34, "ClubName1", "Country2", 67, 86, 56, 81, 90, 92);
    Player player2("PlayerName2", 235499.34, "ClubName2", "Country2", 71, 68, 86, 81, 89, 79);
    
    return 0;
}
