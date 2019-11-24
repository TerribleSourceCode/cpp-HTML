#pragma once
#include <iostream>
#include <fstream>

class htmlfile {
private:
	std::fstream file;
public:
	std::string filename;
	
	// *********************** ALL INIT TAGS ***********************

	void init(std::string fileName) {
		filename = fileName;
		file.open(filename, std::ios::app);
		file << "<!DOCTYPE html>";
		file << "<html>";
		file.close();
	}

	// *********************** ALL DIV TAGS ***********************

	void fDiv() {
		file.open(filename, std::ios::app);
		file << "<div>";
		file.close();
	}

	void fDiv(std::string align) {
		file.open(filename, std::ios::app);
		if (align == "CENTER") {
			file << "<div style=\"text-align: center;\">";
		}
		if (align == "LEFT") {
			file << "<div style=\"text-align: left;\">";
		}
		if (align == "RIGHT") {
			file << "<div style=\"text-align: right;\">";
		}
		file.close();
	}

	void eDiv() {
		file.open(filename, std::ios::app);
		file << "</div>";
		file.close();
	}
	// *********************** ALL SPAN TAGS ***********************


	// *********************** ALL PARGRAPH TAGS ***********************
	
	void pTag(std::string text) {
		file.open(filename, std::ios::app);
		file << "<p>" << text << "</p>";
		file.close();
	}

	void pTag(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<p style=\"color: " << color << "; " <<  "font-family: " << font << ";\">" << text << "</p>";
		file.close();
	}

	// *********************** ALL HEADER TAGS ***********************

	void H1(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h1 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h1>";
		file.close();
	}
	void H2(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h2 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h2>";
		file.close();
	}
	void H3(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h3 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h3>";
		file.close();
	}
	void H4(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h4 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h4>";
		file.close();
	}
	void H5(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h5 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h5>";
		file.close();
	}
	void H6(std::string text, std::string color, std::string font) {
		if (font == "") {
			font = "arial";
		}
		if (color == "") {
			color = "black";
		}

		file.open(filename, std::ios::app);
		file << "<h6 style=\"color: " << color << "; " << "font-family: " << font << ";\">" << text << "</h7>";
		file.close();
	}

	// *********************** ALL END TAGS ***********************

	void end() {
		file.open(filename, std::ios::app);
		file << "</html>";
		file.close();
	}
};

class stylefile {

};