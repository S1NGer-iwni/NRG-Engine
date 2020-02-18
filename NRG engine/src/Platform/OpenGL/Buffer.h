#pragma once
#include <GL/glew.h>

typedef struct VertexBuffer
{
	VertexBuffer(GLfloat* vertices);
	~VertexBuffer();
	void bind();
	void unbind();

	GLuint buffer;
};

typedef struct IndexBuffer
{
	IndexBuffer(GLfloat* indices);
	~IndexBuffer();
	void bind();
	void unbind();

	GLuint buffer;
};