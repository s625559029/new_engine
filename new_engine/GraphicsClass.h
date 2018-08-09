#ifndef  _GRAPHICSCLASS_
#define _GRAPHICSCLASS_

#include "D3DClass.h"
#include "CameraClass.h"
#include "ModelClass.h"
#include "LightShaderClass.h"
#include "LightClass.h"
#include "BitmapClass.h"
#include "TextClass.h"
#include "ModelListClass.h"
#include "FrustumClass.h"
#include "TextureShaderClass.h"

const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 100.0f;
const float SCREEN_NEAR = 1.0f;

class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame(int, int, float, float, float, float);
	bool Render();

private:
	bool RenderScene();
	bool RenderHUD();

private:
	D3DClass* m_D3D;
	CameraClass* m_Camera;
	ModelClass *m_FloorModel;
	LightShaderClass* m_LightShader;
	LightClass* m_Light;
	TextClass* m_Text;
	BitmapClass* m_Bitmap;
	TextureShaderClass* m_TextureShader;
};

#endif // ! _GRAPHICSCLASS_

