#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxXmlSettings.h"

#include <tlhelp32.h>
#include <locale> 
#include <codecvt>
#include <windows.h>

class ofApp : public ofBaseApp
{
public:

	void setup();
	void update();
	void draw();

private:

	void terminate_app(const string appName);
	void close_alert_dialog(const string appName);
	void boot_app(const string path);
	bool is_process_running(const string procName);

	ofxOscReceiver receiver;
	bool b_booting;
	bool b_manual_boot;
	float last_boot_time;
	float last_respond_time;
	string path_to_boot;
	string name_to_kill;
	string exe_name;
	float ping_wait_interval_sec;
};
