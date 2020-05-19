#pragma once

enum E_V4L2_PIX_FMT {
	V4L2_PIX_FMT_SGBRG8,
	V4L2_PIX_FMT_SGRBG8,
	V4L2_PIX_FMT_SBGGR8
};

void v4lconvert_bayer_to_bgr24(const unsigned char *bayer,
		unsigned char *bgr, int width, int height, unsigned int pixfmt);

