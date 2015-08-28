#include "PM.h"
#include "GLUtils.h"
#include "Utils.h"

namespace pm {

PM::PM() {
}

PM::~PM() {
}

void PM::generateCurvedBox(RenderManager* renderManager, const glm::mat4& modelMat) {

	for (int i = 0; i < 100; ++i) {
		glm::mat4 mat = glm::translate(modelMat, glm::vec3(genRand(-30, 30), genRand(-30, 30), genRand(-30, 30)));
	
		std::vector<Vertex> vertices;
		glutils::drawQuad(5, 5, glm::vec3(1, 1, 1), mat, vertices);

		QString name = QString("object%1").arg(i);
		renderManager->addObject(name, "", vertices);
	}

}

void PM::generate(RenderManager* renderManager, const glm::mat4& modelMat) {



	/*
	float h1 = 0.3f;
	float h2 = 1.0f;
	float g1 = 0.25f;
	float g2 = 0.85f;
	float d1 = 10.0f;
	float w1 = 1.2f;
	float w2 = 1.5f;
	float l1 = 1.8f;

	glm::vec3 color(1, 1, 1);
	std::vector<Vertex> vertices;

	{
		int grid_size = 10;
		std::vector<glm::vec3> points((grid_size * 2 + 1) * (grid_size * 2 + 1));

		for (int iy = 0; iy <= grid_size * 2; ++iy) {
			for (int ix = 0; ix <= grid_size; ++ix) {
				float y = (float)iy / grid_size / 2.0 * l1;

				float mx = w1 - (l1 - y) * (l1 - y) * (w2 - w1) * 0.5f / l1 / l1;
				float x = (float)ix / grid_size * mx;

				float mz2 = h2 - (l1 - y) * (l1 - y) * (h2 - h1) / l1 / l1;
				float mz1 = g2 - (l1 - y) * (l1 - y) * (g2 - g1) / l1 / l1;
				float z = mz2 - x * x * (mz2 - mz1) / mx / mx;

				points[iy * (grid_size * 2 + 1) + grid_size + ix] = glm::vec3(x, y, z);
				points[iy * (grid_size * 2 + 1) + grid_size - ix] = glm::vec3(-x, y, z);
			}
		}
		glutils::drawCurvilinearMesh(grid_size * 2 + 1, grid_size * 2 + 1, points, color, modelMat, vertices);
	}

	renderManager->addObject("car", "", vertices);
	*/
}

}
