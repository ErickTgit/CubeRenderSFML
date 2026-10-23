#include "Cube.hpp"

class Cube{
    public:
        struct vec3d
        {
            float p1, p2, p3;
        }; 
        struct triangle
        {
            vec3d p[3];
        };
        struct mesh
        {
            std::vector<triangle> tris;
        };
        struct matrix4x4
        {
            float m[4][4] = 0;
        }
    private:
        mesh meshCube;
        matrix4x4 projectionMatrix;

    public:
        Cube()
        {
            meshCube.tris =
            {
                // South
                { 0.0f, 0.0f, 0.0f,    0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 0.0f },
                { 0.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 0.0f, 0.0f },

                // EAST                                                      
                { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f },
                { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 0.0f, 1.0f },

                // NORTH                                                     
                { 1.0f, 0.0f, 1.0f,    1.0f, 1.0f, 1.0f,    0.0f, 1.0f, 1.0f },
                { 1.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 0.0f, 1.0f },

                // WEST                                                      
                { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 1.0f, 0.0f },
                { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 0.0f,    0.0f, 0.0f, 0.0f },

                // TOP                                                       
                { 0.0f, 1.0f, 0.0f,    0.0f, 1.0f, 1.0f,    1.0f, 1.0f, 1.0f },
                { 0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 1.0f, 0.0f },

                // BOTTOM                                                    
                { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f },
                { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f,    1.0f, 0.0f, 0.0f },
            };
            float fNear = 0.1f;
            float fFar = 1000.0f;
            float fFov = 90.0f;
            float fAspectRatio = (float)screenHeight / (float)screenWidth; 
            float fFovRadius = 1.0f / tanf(fFov * 0.05f / 180.0f * M_PI) ;

            projectionMatrix.m[0][0] = (fAspectRatio * fFovRadius);
            projectionMatrix.m[1][1] = (fFovRadius);
            projectionMatrix.m[2][2] = (fFar / (fFar / fNear);
            projectionMatrix.m[3][2] = (-fFar * fNear / fFar - fNear);
            projectionMatrix.m[2][3] = (1.0f);
            projectionMatrix.m[3][3] = (0.0f);
 
        }
        moveCube()
        {
            for(auto tri : meshCube.tris)
            {

            }
        }
};

