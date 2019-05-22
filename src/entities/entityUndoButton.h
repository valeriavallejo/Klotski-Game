#ifndef ENTITYUNDOBUTTON_H
#define ENTITYUNDOBUTTON_H

#include "entityRectangle.h"
#include <iostream>

class EntityUndoButton : public EntityRectangle {
public:
	EntityUndoButton(int x, int y, int width, int height, const Color& color);
	
	void action(void);

private:
	int button;
};

#endif // !ENTITYCUBE