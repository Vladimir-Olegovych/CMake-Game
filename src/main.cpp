#include <fmt/core.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    fmt::print("Hello from fmt!\n");

    if (!glfwInit()) {
        fmt::println(stderr, "Failed to initialize GLFW");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(640, 640, "OpenGL Window", nullptr, nullptr);
    if (!window) {
        fmt::println(stderr, "Failed to create GLFW window");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

