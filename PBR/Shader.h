#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

class Shader {
public:
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath, const char* geometryPath = nullptr);

	void use();

	void setBool(const std::string& name, bool value) const;

	void setInt(const std::string& name, int value) const;

	void setFloat(const std::string& name, float value) const;

	void setVec2(const std::string& name, float x, float y) const;

	void setVec2(const std::string& name, glm::vec2& value) const;

	void setVec3(const std::string& name, float x, float y, float z) const;

	void setVec3(const std::string& name, glm::vec3& value) const;

	void setVec4(const std::string& name, float x, float y, float z, float w) const;

	void setVec4(const std::string& name, glm::vec4& value) const;

	void setMat2(const std::string& name, glm::mat2& value) const;

	void setMat3(const std::string& name, glm::mat3& value) const;

	void setMat4(const std::string& name, glm::mat4& value) const;

private:
	void checkCompileErrors(GLuint shader, std::string type);
};

