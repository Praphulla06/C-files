#include <iostream>

class Stove
{
    private:
        int temperature = 0;
    public:

        Stove (int temperature)
        {
            this -> temperature = temperature;
        }
        int getTemperature()
        {
            return temperature;
        }

        void setTemperature(int temperature)
        {
            if (temperature < 0)
            {
                this -> temperature = 0;

            }
            else if(temperature >= 10)
            {
                this->temperature = 10;
            }
            else
            {
                this->temperature = temperature;
            }
        }
};

int main() {
  // Abstraction = hiding unnecessary data from outside a class
  // getter = function that makes a private attribute READABLE
  // setter = function that makes a private attribute WRITABLES

  Stove stove(3);

//    = -100000;

  std::cout << "Temperature: " << stove.getTemperature() << std::endl;

  stove.setTemperature(42069);
  std::cout << "Temperature: " << stove.getTemperature() << std::endl;
  stove.setTemperature(6);
  std::cout << "Temperature: " << stove.getTemperature() << std::endl;
  return 0;
}