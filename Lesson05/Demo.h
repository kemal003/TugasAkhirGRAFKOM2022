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

	// Shader Things
	GLuint depthmapShader, shadowmapShader, depthMapFBO, depthMap;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	void BuildDepthMap();
	void BuildShaders();
	
	GLuint shaderProgram,
		VBO, VAO, EBO, textureWall, textureAtap, texturePresiden, textureWapres, textureKakiKursi, textureKakiMeja, textureMeja, textureOrnamen, textureAlasKursi, textureSandaranKursi, texturePapanTulis, textureProyektor, textureTiang,
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
	void DrawColoredPlane(GLuint shader);
	void BuildColoredWall();
	void DrawColoredWall(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildAtap();
	void DrawAtap(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildOrnamen();
	void DrawOrnamen(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildPresiden();
	void DrawPresiden(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildCoPresiden();
	void DrawCoPresiden(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildKakiKursi();
	void DrawKakiKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildKakiMeja();
	void DrawKakiMeja(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildMeja();
	void DrawMeja(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildAlasKursi();
	void DrawAlasKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildSandaranKursi();
	void DrawSandaranKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, float rotate, GLuint shader
	);

	void BuildPapanTulis();
	void DrawPapanTulis(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildProyektor();
	void DrawProyektor(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildTiang();
	void DrawTiang(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

