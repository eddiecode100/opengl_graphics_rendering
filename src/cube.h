#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <GLFW/glfw3.h>

class Cube {
    private:
        float width_;
        float height_;
        float depth_;
        float size_;
        float speed_;
        char color_;

    public:
        Cube(float w, float h, float d, float spd, char c) : width_(w), height_(h), depth_(d), speed_(spd), color_(c) {}
    
        
        void printVertices() const;

        void draw() const;

        char setColor(const char&);

        float setWidth(const float&);

        float setHeight(const float&);

        float setDepth(const float&);

        float setSpeed(const float&);
};

#endif
