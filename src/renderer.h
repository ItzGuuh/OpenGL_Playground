//
// Created by gustavo on 05/01/2021.
//

#ifndef OPENGL_RENDERER_H
#define OPENGL_RENDERER_H

#endif //OPENGL_RENDERER_H
#include <csignal>
#include <GL/glew.h>

#define ASSERT(x) if (!(x)) raise(SIGTRAP);
#define GLCall(x) GLClearError(); \
    x;                            \
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();

bool GLLogCall(const char *function, const char *file, int line);
