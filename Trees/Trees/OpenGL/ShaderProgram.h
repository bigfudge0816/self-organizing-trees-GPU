#pragma once
#include <glad/glad.h>
#include "glm/glm.hpp"
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class ShaderProgram {
public:
    unsigned int ID; // GL Shader ID

    // Read in and compile the vert/frag shaders
    ShaderProgram(const GLchar* vertexPath, const GLchar* fragmentPath); // Load + compile vert/frag shaders and required OpenGL calls
    ~ShaderProgram() {}
    void use(); // Use this ShaderProgram
    void setCameraViewProj(const char* uniformName, const glm::mat4& camViewProj); // Set the camera VP Matrix uniform
};
