#include <iostream>

class Pieces
{
    public: 
        std::string type;
        int value;
        int color;

        Pieces(std::string type, int value, int color)
        {
            this->type =  type;
            this->value = value;
            this->color = color;
        }
};

int main() {
  std::string pieces[] = {"King", "Queen", "Bishop", "Knight", "Rook", "Pawn"};
  int value[] = {1, 9, 3, 3, 5, 1};

  int numberOfPiece = sizeof(value) / sizeof(value[0]);
  for (int i = 0; i < numberOfPiece; i++)
  {
    Pieces(pieces[i], value[i], 1);
  }

  return 0;
}