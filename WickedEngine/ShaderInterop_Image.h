#ifndef WI_SHADERINTEROP_IMAGE_H
#define WI_SHADERINTEROP_IMAGE_H
#include "ShaderInterop.h"

CBUFFER(ImageCB, CBSLOT_IMAGE)
{
	float4	xCorners[4];
	float4	xTexMulAdd;
	float4	xTexMulAdd2;
	float4	xColor;

	uint	xMirror;
	float	xMipLevel;
	float	xMipLevel_Background;
	float	padding_ImageCB;
};


#endif // WI_SHADERINTEROP_IMAGE_H
