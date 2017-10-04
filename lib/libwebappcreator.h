// The function inserts [name], [desc], [title], [version], [alias] and [maint] into
// the corresponding field of manifest.json.
void insertManifest (char name[], char desc[], char title[], char version[],
					 char alias[], char maint[], bool ogra);

// The function inserts the corresponding policy groups into the apparmor file.
void insertApparmor(char groups[], char name[], bool ogra);

// The function inserts the URLs and settings of the webapp into a desktop file.
void insertDesktop(char name[], char com[], char title[], char url[], char arg[],
				   char subUrl1[], char subUrl2[], char subUrl3[], char urls[],
				   char PROVIDER[], char USER_AGENT[], bool https, bool ogra, bool png);

// This function sets the config.js file of Ogra's alternate webapp container
void insertConfig (char name[], char alias[], char url[], char subUrl1[], 
				   char subUrl2[], char subUrl3[], char urls[], bool hapticLinks,
				   char USER_AGENT[], bool https, bool UA, bool audibleLinks);

// This function sets the qml files of Ogra's alternate webapp container
void insertQML (char name[], char alias[]);

// This function creates the Webapp files and folders
void createFiles(char name[], bool ogra, bool png, bool selIcon);

// This function generates the click package
void genClick();

// This function deletes all temporary data generated by Webapp Creator
void cleanTmp();

//It returns true if [word] contains only lowercase characters.
bool lowercase(char word[]);

//It returns false if [word] contains non-numeric characters other than dots.
bool interger(char word[]);

//It returns true if [word] contains one '@' and at least one dot.
bool email(char word[]);

//It returns true if there is at least one dot.
bool URL(char word[]);

//It returns false if [word] starts with "http"
bool noHttp (char word[]);

//It returns true if word is at least two characters long
bool validName (char word[]);

//It returns true if word is valid SVG or PNG image file
bool validImage (char word[]);
