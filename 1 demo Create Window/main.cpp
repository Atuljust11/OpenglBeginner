#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {

	//create a window
	//initialize glfw(note : once we intialize we should terminate it before function ends) 
	glfwInit();
	//tell glfw which major version of opengl we ae using 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	//tell glfw which minor version of opengl we ae using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//tell glfw which profile  of opengl we ae using (profile contains functions)
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//define window
	GLFWwindow* window = glfwCreateWindow(800, 800, "Opengl 1", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "faile to create window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	gladLoadGL();
	glViewport(0, 0, 800, 800);

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);


	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	//once we intialize we should terminate it before function ends
	glfwTerminate();
	return 0;
}