#pragma once
#include <stdio.h>
#include <GL\glew.h>

typedef struct VertexShader
{
	VertexShader(GLuint shader, const GLchar* shaderSource);
	~VertexShader();

	GLuint shader;
};

typedef struct FragmentShader
{
	FragmentShader(GLuint shader, const GLchar* shaderSource);
	~FragmentShader();

	GLuint shader;
};

typedef struct LinkProgram
{
	GLuint shaderProgram;
	LinkProgram(GLuint shaderProgram);
	~LinkProgram();
	void attach(VertexShader vertex_shader, FragmentShader fragment_shader);
	void link();
	void bind();
	void unbind();
};