#include<iostream>

#include"image.h"

int main() {

	const int width = 640;
	const int height = 480;

	image image(width, height);

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if ((x == 28 && y == 29) || (x == 28 && y == 30))
			{
				image.setColor(Color((float)255, (float)255, (float)255), x, y);
			} 
			else if (((x == 57 && y == 433) || (x == 76 && y == 433)))
			{
				image.setColor(Color((float)255, (float)255, (float)255), x, y);
			}
			else {
				image.setColor(Color(), x, y);
			}
			
		}
	}

	image.Export("image.bmp");

	return 0;
}