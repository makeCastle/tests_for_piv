#include<iostream>
#include<fstream>

int main() {
	std::ofstream outWorkingArea;
	std::ofstream outROI;

	outWorkingArea.open("D:/Tests/test files/mesh_test.txt");
	outROI.open("D:/Tests/test files/ROI_test.txt");

	int k; double workingAreaX; double workingAreaY; double xROI; double yROI;
	double x; double y; int count = 1;

	std::cout << "Enter count of vectors: " << std::endl;
	std::cin >> k;
	std::cout << std::endl;

	std::cout << "Enter x and y sizes of area: " << std::endl;
	std::cin >> workingAreaX >> workingAreaY;
	std::cout << std::endl;

	std::cout << "Enter x and y sizes of ROI: " << std::endl;
	std::cin >> xROI >> yROI;
	std::cout << std::endl;

	// START area-file filling
	y = yROI + workingAreaY + 0.5; 
	while (count <= k)
	{
		x = xROI + workingAreaX + 0.5;
		for (int j = 0; j < 500; j++)
		{
			outWorkingArea << count << "	" << x  << "		" << y << "		" << workingAreaX << "		" << workingAreaY << std::endl;
			x += 0.0;
			++count;
		}
		y += 0.0; 
	}
	count = 1;
	// FINISH area-file filling

	// START ROI-file filling
	while (count <= k)
	{
		outROI << yROI / 2.0 << "	" << xROI / 2.0 << "	" << yROI / 2.0 - 1.0 << "	" << xROI / 2.0 - 1.0 << std::endl;
		++count;
 	}
	// FINISH ROI-file filling

	outWorkingArea.close();
	outROI.close();

	return 0;
}