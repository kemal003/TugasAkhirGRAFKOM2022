#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram,
		VBO, VAO, EBO, textureWall, texturePresiden, textureWapres,
		VBO2, VAO2, EBO2, texturePlane;

	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	// void BuildColoredCube();
	void BuildColoredPlane();
	// void DrawColoredCube();
	void DrawColoredPlane();
	void BuildColoredWall();
	void DrawColoredWall(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ
	);

	void BuildPresiden();
	void DrawPresiden(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ
	);

	void BuildCoPresiden();
	void DrawCoPresiden(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ
	);

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

