#pragma once

#include "RenderManager.h"

namespace pm {

class PM
{
public:
	PM(void);
	~PM(void);

	void generateCurvedBox(RenderManager* renderManager, const glm::mat4& modelMat);
	void generate(RenderManager* renderManager, const glm::mat4& modelMat);
};

}
