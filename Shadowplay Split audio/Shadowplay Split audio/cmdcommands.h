#include <shellapi.h>
// this fuses an acc file to the mp4 file from shadowplay.\
but this are not finished theres some stuff with file locations i need to fix.\
like everybody dont have windows on the c harddrive. so need to have a fix for that. and everyone does not just record csgo.

using namespace std;

	LPCTSTR open;
	LPCTSTR IpFile = "C:\Windows\System32\cmd.exe"; // commandprompt directory
	char commands[200] = "/c MP4Box -new -add ";// commands that will run
	char output[10]; // define outputfile name
	char filemp4[] = ".mp4 "; // define output file type
	char fileaac[] = ".aac#audio ";
	char newaudio[] = "newaudio";
	char newvideo[] = "csgo";
	char command2[] = " -add ";

	int fuse() // fuses audio to video file and creates an new file.
	{
		 // adds output to commands
		strcat_s(commands, newvideo);
		strcat_s(commands, filemp4); 
		strcat_s(commands, command2);
		strcat_s(commands, newaudio);
		strcat_s(commands, fileaac);
		strcat_s(commands, output);
		strcat_s(commands, filemp4);
		cout << commands << endl;
		Sleep(1000);
		ShellExecute(NULL, "open", "cmd", commands, "c:\\users\\master\\videos\\counter-strike  global offensive", SW_SHOW); // exec the commands
		return 0;
	}


	//MP4Box -new -add csgo.mp4 -add newaudio.mp3#audio Output.mp4