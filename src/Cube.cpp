#include "Cube.hpp"

class Cube{
    public:
        struct triangle
        {
            std::array<sf::Vector3f, 3>  myVec;
        };
        struct mesh
        {
            std::vector<triangle> tris;
        };
    private:
        mesh meshCube;

    public:
        Cube()
        {
            meshCube.tris =
            {
                // South
                {
                    {{0.0f, 0.0f, 0.0f},     {0.0f, 0.0f, 0.0f},   {0.0f, 0.0f, 0.0f}}
                }
            };
        }
};

