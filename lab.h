#include <string>
#include <fstream>
using namespace std;
class FileReader
{
public:
    FileReader();
    FileReader(const string&);
    bool open(const string&);
    void close();
    string getFileName() const;
    bool isOpen() const;
    bool isEndOfFile() const;
    bool getNextLine(string&);
    bool getNextWord(string&);
private:
    string fileName;
    ifstream fileStream;
};
