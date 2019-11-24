#include <iostream>
#include <fstream>
#include "WebLibrary.h"

int main() {
	htmlfile website;
	website.init("website.html");

	website.fDiv("CENTER");
	website.pTag("Hello World", "blue", "sans-serif");
	website.H1("This is a header tag!", "red", "sans-serif");
	website.H2("This is a header tag!", "red", "sans-serif");
	website.H3("This is a header tag!", "red", "sans-serif");
	website.H4("This is a header tag!", "red", "sans-serif");
	website.H5("This is a header tag!", "red", "sans-serif");
	website.H6("This is a header tag!", "red", "sans-serif");
	website.eDiv();

	website.fDiv("LEFT");
	website.H1("This is a header tag!", "red", "sans-serif");
	website.H2("This is a header tag!", "red", "sans-serif");
	website.H3("This is a header tag!", "red", "sans-serif");
	website.H4("This is a header tag!", "red", "sans-serif");
	website.H5("This is a header tag!", "red", "sans-serif");
	website.H6("This is a header tag!", "red", "sans-serif");
	website.pTag("Hello World", "green", "sans-serif");
	website.eDiv();
	
	website.fDiv("RIGHT");
	website.pTag("Hello World", "violet", "Arial");
	website.eDiv();
	
	website.end();
}