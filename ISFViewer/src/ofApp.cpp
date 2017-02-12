#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	
	syphonDir.setup();
	
	ImGuiIO * io = &ImGui::GetIO();
	ImFontConfig font_config;
	font_config.OversampleH = 1;
	font_config.OversampleV = 1;
	io->Fonts->AddFontFromFileTTF(&ofToDataPath("fonts/Ruda-Bold.ttf")[0], 14.f, &font_config);
	
	gui.setup();

	gui.setTheme(new GuiTheme());
	
	ImGuiStyle *style = &ImGui::GetStyle();
	style->WindowRounding = 0;
	style->ScrollbarSize = 3;
	style->ScrollbarRounding = 0;
	style->FramePadding = ImVec2(6, 4);
	style->ItemSpacing = ImVec2(4, 8);
	style->FrameRounding = 2;
	style->GrabRounding = 2;
	style->Colors[ImGuiCol_WindowBg]              = ImVec4(1.00f, 1.00f, 1.00f, 0.88f);
}

//--------------------------------------------------------------
void ofApp::update(){
	
	

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackground(0);
	
	
	gui.begin();

	{
		
	
		ImGui::SetWindowPos(ImVec2(0, 0));
		ImGui::SetWindowSize(ImVec2(ImGui::GetWindowWidth(), ofGetHeight()));
		
		
		// Syphon Inputs
		
		string serverNames = "";
		
		for (auto server : syphonDir.getServerList()) {
			
			
			
			if (server.serverName != "") {
				serverNames += server.appName + " - " + server.serverName;
			} else {
				serverNames += server.appName;
			}
			
			serverNames += "\0";
		}
		
		serverNames += "\0";
		
		const char* serverItems = serverNames.c_str();
		static int index = -1;

		
		if (ImGui::Combo("server", &index, serverItems)) {
			ofLogNotice() << index;
		}
		
		
		
		ImGui::ShowStyleEditor();
		
		gui.openThemeColorWindow();
	}
	gui.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
