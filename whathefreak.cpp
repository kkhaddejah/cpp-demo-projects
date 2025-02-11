#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string domain, string tld, bool addWWW = true)
{
  string url = protocol + "://";
  if (addWWW)
  {
    url += "www.";
  }
  url += domain + "." + tld;
  return url;
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
  return 0;
}