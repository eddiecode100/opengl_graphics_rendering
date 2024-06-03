#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(void)
{
    // ANSI ESCAPE CODES FOR COLORS

    const std::string RESET = "\033[0m";
    const std::string RED = "\033[31m";


    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Initalize GLEW */ 
    glewExperimental = GL_TRUE; // Enable modern OpenGL features.
    GLenum err = glewInit();

    if (err != GLEW_OK)
        std::cout << RED << "ERROR: " << RESET << "Failed to initalize GLEW: " << glewGetErrorString(err) << '\n';


    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f,-0.5f);
        glVertex2f(0.0f,0.5f);
        glVertex2f(0.5f,-0.5f);
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


