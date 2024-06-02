#include "cube.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <GLFW/glfw3.h>


        void Cube::printVertices() const {
            std::cout << "not implemented yet" << '\n';
        }

        void Cube::draw() const {
            std::cout << "not implemented yet" << '\n';
        }

        char Cube::setColor(const char& color) {
            color_ = color;
            return color_;
        }

        float Cube::setWidth(const float& width) {
            width_ = width;
            return width_;
        }

        float Cube::setHeight(const float& height) {
            height_ = height;
            return height_;
        }

        float Cube::setDepth(const float& depth) {
            depth_ = depth;
            return depth_;
        }

        float Cube::setSpeed(const float& speed) {
            speed_ = speed;
            return speed_;
        }
