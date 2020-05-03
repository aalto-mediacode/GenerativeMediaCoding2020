#pragma once

#include "ofMain.h"

class Particle{

    public:
        void setup(glm::vec2 originV);
        void update();
        void draw();
    
    glm::vec2 posV;
    glm::vec2 velV;
    glm::vec2 accelV;
};
