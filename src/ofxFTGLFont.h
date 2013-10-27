

#pragma once

#include "ofMain.h"
#include "ftgl.h"

class ofxFTGLFont {
    
  public:
	ofxFTGLFont();
    ~ofxFTGLFont();
	
    bool 		loadFont(string filename, float fontsize = 10, float depth = 0);
    bool 		isLoaded();
    
	void 		setSize(int size);
	float 		getLineHeight();
    void		setLineHeight(float newHeight);
	ofRectangle getStringBoundingBox(wstring s, float x, float y);
	ofRectangle getStringBoundingBox(string s, float x, float y);

	void 		drawString(wstring s, float x, float y);
	void 		drawString(string s, float x, float y);
	float 		stringHeight(string c);
	float 		stringWidth(string c);
	
    FTFont*  font;
    
  protected:
    bool loaded;
};

