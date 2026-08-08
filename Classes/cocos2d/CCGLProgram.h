// ============================================================
// CCGLProgram.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCGLPROGRAM_H_
#define COCOS2D_CCGLPROGRAM_H_

#include "cocos2d.h"

namespace cocos2d {

class CCGLProgram {
public:
    CCGLProgram();
    CCGLProgram();

    virtual ~CCGLProgram();
    virtual ~CCGLProgram();
    virtual ~CCGLProgram();

    void programLog();
    void description();
    void addAttribute(char const*, unsigned int);
    void compileShader(unsigned int*, unsigned int, char const*);
    void updateUniforms();
    void vertexShaderLog();
    void fragmentShaderLog();
    void logForOpenGLObject(unsigned int, void (*)(unsigned int, unsigned int, int*), void (*)(unsigned int, int, int*, char*));
    void updateUniformLocation(int, void*, unsigned int);
    void setUniformsForBuiltins();
    void setUniformLocationWith1f(int, float);
    void setUniformLocationWith1i(int, int);
    void setUniformLocationWith2f(int, float, float);
    void setUniformLocationWith2i(int, int, int);
    void setUniformLocationWith3f(int, float, float, float);
    void setUniformLocationWith3i(int, int, int, int);
    void setUniformLocationWith4f(int, float, float, float, float);
    void setUniformLocationWith4i(int, int, int, int, int);
    void getUniformLocationForName(char const*);
    void setUniformLocationWith2fv(int, float*, unsigned int);
    void setUniformLocationWith2iv(int, int*, unsigned int);
    void setUniformLocationWith3fv(int, float*, unsigned int);
    void setUniformLocationWith3iv(int, int*, unsigned int);
    void setUniformLocationWith4fv(int, float*, unsigned int);
    void setUniformLocationWith4iv(int, int*, unsigned int);
    void initWithVertexShaderFilename(char const*, char const*);
    void initWithVertexShaderByteArray(char const*, char const*);
    void setUniformLocationWithMatrix3fv(int, float*, unsigned int);
    void setUniformLocationWithMatrix4fv(int, float*, unsigned int);
    void use();
    void link();
    void reset();

};

} // namespace cocos2d

#endif // COCOS2D_CCGLPROGRAM_H_
