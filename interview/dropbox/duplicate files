// Duplicate Files

// Write a function that returns a list of lists of duplicate files in a directory.


// Example input:
// '/foo/'

// Example output:
// [
//      ['/foo/bar.png', '/foo/images/foo.png'],
//      ['/foo/file.tmp', '/foo/other.temp', '/foo/temp/baz/that.foo']
// ]


boolean isDirectory(String path);
list<String> getChildren(String dirPath);
unsigned int getsize(string file);
int getHashofContents(string file);


#include <iostream>
using namespace std;

map<int, vector<string>> mp;

// To execute C++, please define "int main()"
int main(char* argc, char** argv) {
  string pathname = argv[1];
  findDuplicate(pathname);
  
  for(map<int, vector<string> >::iterator it = mp.begin(); it != mp.end(); it++){
    if(it->second.size()>1){
      for(int j=0; j<it->second.size(); j++){
        cout<<it->second[j];
      }
      cout<<'\n';
    }
  }
  return 0;
}

void findDuplicate(string path)
if(isDirectory(pathname)){
    list<string> fileChildren = getChildren(pathname);
    for(int i=0; i<fileChildren.size(); i++){
      if(isDirectory(fileChildren[i])){
        findDuplicate(fileChildren[i]);
      }
      else{
        int key = getHahsofContents(fileChildren[i]);
        if(mp.find(key) == mp.end()){
          vector<string> files;
          files.push_back(fileChildren[i]);
          mp[key] = files;
        }else{
          mp[key].push_back(fileChildren[i]);
        }
      }
    }
  }

