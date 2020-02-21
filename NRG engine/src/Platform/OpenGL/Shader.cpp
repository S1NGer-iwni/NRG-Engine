#include "Shader.h"

VertexShader::VertexShader(GLuint shader, const GLchar* shaderSource)
{
	glShaderSource(shader, 1, &shaderSource, NULL);
	glCompileShader(shader);
}

VertexShader::~VertexShader()
{
	glDeleteShader(shader);
}

FragmentShader::FragmentShader(GLuint shader, const GLchar* shaderSource)
{
	glShaderSource(shader, 1, &shaderSource, NULL);
	glCompileShader(shader);
}

FragmentShader::~FragmentShader()
{
	glDeleteShader(shader);
}

LinkProgram::LinkProgram(GLuint shaderProgram)
{
	shaderProgram = glCreateProgram();
}

LinkProgram::~LinkProgram()
{
	glDeleteProgram(shaderProgram);
}
void LinkProgram::attach(VertexShader vertex_shader, FragmentShader fragment_shader)
{
	glAttachShader(shaderProgram, vertex_shader.shader);
	glAttachShader(shaderProgram, fragment_shader.shader);
}

void LinkProgram::link()
{
	glLinkProgram(shaderProgram);
}

void LinkProgram::bind()
{
	glUseProgram(shaderProgram);
}
void LinkProgram::unbind()
{
	glUseProgram(0);
}