//
// Created by gustavo on 05/01/2021.
//

#ifndef OPENGL_VERTEXBUFFER_H
#define OPENGL_VERTEXBUFFER_H

#endif //OPENGL_VERTEXBUFFER_H

class VertexBuffer{
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();

    void Bind() const;
    void Unbind() const;
};