#pragma once

#include "gfx_gl.h"

class Textures_GL_Forward : public Textures
{
public:
    Textures_GL_Forward();
    virtual ~Textures_GL_Forward();

    virtual bool Init() override;

    virtual bool Begin(GfxBaseApi* _activeAPI) override;

    virtual void Draw(Matrix* transforms, int count) override;

private:
    struct Vertex
    {
        Vec3 pos;
        Vec2 tex;
    };

    GLuint m_ib;
    GLuint m_vb_pos;
    GLuint m_vb_tex;
    GLuint m_tex1;
    GLuint m_tex2;
    GLuint m_vs;
    GLuint m_fs;
    GLuint m_prog;

    GLuint m_transform_buffer;
};