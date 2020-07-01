#include <iostream>
#include <vector>

struct Vertex {
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

int main()
{
	//create a vector of Structs
	std::vector<Vertex> vertices;
	vertices.push_back({ 1, 2, 3});
	vertices.push_back({ 4, 5, 6 });

	//First method to print - old school index based method
	// << operator is overloaded to display the vector elements in neat way
	for (int i = 0; i < vertices.size(); i++)
	{ 
		std::cout << vertices[i] << std::endl;
	}

	//Second method to print vector - range based
	for (Vertex& v : vertices)
	{
		std::cout << v <<std::endl;
	}

	//Clear the vertices to reset the size
	//vertices.clear();

	//Erase the vertices, only first element
	//vertices.erase(vertices.begin()+1);

	std::cout << "Press Enter key";
	std::cin.get();
}